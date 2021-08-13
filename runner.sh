#!/bin/bash

usage(){
  echo "usage:"
  echo "    $0 [options...]"
  echo ""
  echo "options:"
  echo "    --suite <DIR>           TestSuite root directory"
  echo "    --work <DIR>            Working directory"
  echo "    --cc <STR>              Target Compiler"
  echo "    --exec <STR>            Target Executer"
  echo "    --cflags <STR>          Target CFLAGS"
  echo "    --ldflags <STR>         Target LDFLAGS"
  echo "    -t | --testlist <FILE>  Tesetlist file"
}

SUITEDIR=$(cd $(dirname "$0"); pwd)
WORKDIR=work
COMPILER=clang
EXECUTER=
CFLAGS=
LDFLAGS=
TESTLIST=testlist.cfg

args_rest=()
while [ $# -gt 0 ]; do
  opt=$1
  case $opt in
    -h | --help)
      usage 1>&2
      exit 1
      ;;
    --suite)
      SUITEDIR="$2"
      shift 2
      ;;
    --work)
      WORKDIR="$2"
      shift 2
      ;;
    --cc)
      COMPILER="$2"
      shift 2
      ;;
    --exec)
      EXECUTER="$2"
      shift 2
      ;;
    --cflags)
      CFLAGS="$2"
      shift 2
      ;;
    --ldflags)
      CFLAGS="$2"
      shift 2
      ;;
    -t | --testlist)
      TESTLIST="$2"
      shift 2
      ;;
    *)
      args_rest+=( "$1" )
      shift 1
      ;;
  esac
done

# ---- command check ----
if [ ${#args_rest[*]} -gt 0 ]; then
  echo "Error: Too few arguments:" "${args_rest[@]}" 1>&2
  exit 1
fi
if [ ! -d "$SUITEDIR/c99" ]; then
  echo "Error: TestSuite not detected:" "$SRCDIR" 1>&2
  exit 1
fi
if [ ! -f "$TESTLIST" ]; then
  echo "Error: Testlist file not found:" "$1" 1>&2
  exit 1
fi

# ---- exec tests ----
check_line(){
  line="$1"
  if [[ $line =~ \#.+ ]]; then
    return 0
  fi
  return 1
}
export SUITEDIR="$SUITEDIR"
make distclean
cat "$TESTLIST" | while read line; do
  if check_line "$line"; then
    continue
  fi
  testcase=$line
  src="$testcase.c"
  srcdir=$(echo $src | sed -r "s/([^_]+_[^_]+_[^_]+).+/\\1/g" | sed "s/_/\//g")
  ./make.sh \
    "WORKDIR=$WORKDIR" \
    "TESTCASE=$testcase" \
    "SRCS=$srcdir/$src" \
    "CC=$COMPILER" \
    "CFLAGS=$CFLAGS" \
    "LDFLAGS=$LDFLAGS"
done


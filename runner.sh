#!/bin/bash

# usage: ./runner.sh <testcase-cfg-file>

# ---- command check ----
if [ $# -lt 1 ]; then
  echo "usage: $0 <testcase-cfg-file>"
  exit 0
fi

if [ ! -f "$1" ]; then
  echo "Error: config-file not found:" "$1" 1>&2
  exit 1
fi

# ---- exec tests ----
make distclean
cat $1 | while read line; do
  testcase=$line
  src=$testcase.c
  srcdir=$(echo $src | sed -r "s/([^_]+_[^_]+_[^_]+).+/\\1/g" | sed "s/_/\//g")
  ./make.sh TESTCASE=$testcase SRCS=$srcdir/$src
done


#!/bin/bash

EXIT_PASS=0
EXIT_FAIL=51
EXIT_XPASS=52
EXIT_XFAIL=53
EXIT_UNSUPPORTED=54

MAKEARGS=("$@")
for arg in "${MAKEARGS[@]}"; do
  if [[ $arg =~ WORKDIR* ]]; then
    workdir=$(echo $arg | sed -r "s/WORKDIR=//")
  fi
  if [[ $arg =~ TESTCASE* ]]; then
    testcase=$(echo $arg | sed -r "s/TESTCASE=//")
  fi
done
{
  make all "${MAKEARGS[@]}" \
  && ${workdir}/${testcase}
} 2>&1
exit_state=$?
if [[ $exit_state == $EXIT_PASS ]]; then
  echo "$testcase PASS" 1>&2
elif [[ $exit_state == $EXIT_FAIL ]]; then
  echo "$testcase FAIL" 1>&2
elif [[ $exit_state == $EXIT_XPASS ]]; then
  echo "$testcase XPASS" 1>&2
elif [[ $exit_state == $EXIT_XFAIL ]]; then
  echo "$testcase XFAIL" 1>&2
elif [[ $exit_state == $EXIT_UNSUPPORTED ]]; then
  echo "$testcase UNSUPPORTED" 1>&2
else
  echo "$testcase ERROR:$exit_state" 1>&2
fi

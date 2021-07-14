#!/bin/bash

EXIT_PASS=0
EXIT_FAIL=51
EXIT_XPASS=52
EXIT_XFAIL=53
EXIT_UNSUPPORTED=54

MAKEARGS="$@"
for arg in ${MAKEARGS[@]}; do
  if [[ $arg =~ TESTCASE* ]]; then
    testcase=$(echo $arg | sed -r "s/TESTCASE=//")
  fi
done
make $MAKEARGS > /dev/null 2>&1
exit_state=$?
if [[ $exit_state == $EXIT_PASS ]]; then
  echo "$testcase PASS"
elif [[ $exit_state == $EXIT_FAIL ]]; then
  echo "$testcase FAIL"
elif [[ $exit_state == $EXIT_XPASS ]]; then
  echo "$testcase XPASS"
elif [[ $exit_state == $EXIT_XFAIL ]]; then
  echo "$testcase XFAIL"
elif [[ $exit_state == $EXIT_UNSUPPORTED ]]; then
  echo "$testcase UNSUPPORTED"
else
  echo "$testcase ERROR:$exit_state"
fi

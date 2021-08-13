// RUN: test $? -eq 0

#include "testutil.h"
#include <signal.h>
#include <stdlib.h>  // exit

void sighandler(int sig)
{
  exit(PASS);
}

TESTCASE(c99_7_14_1_1)
{
  if(signal(SIGINT, sighandler) != 0) {
    TEST_FIN(FAIL);
  }

  if(raise(SIGINT) != 0) {
    TEST_FIN(FAIL);
  }

  TEST_FIN(FAIL);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <errno.h>

TESTCASE(c99_7_5_p3)
{
  if(errno != 0) {
    TEST_FIN(FAIL);
  }
  TEST_FIN(PASS);
}


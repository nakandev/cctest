// RUN: test $? -eq 0

#include "testutil.h"
#include <stdbool.h>

TESTCASE(c99_7_16_p2)
{
#ifndef bool
  TEST_FIN(FAIL);
#endif

  bool x = 1;

  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

TESTCASE(c99_7_12_p5)
{
#ifndef NAN
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


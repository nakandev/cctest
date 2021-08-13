// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

TESTCASE(c99_7_12_p3)
{
#ifndef HUGE_VAL
  TEST_FIN(FAIL);
#endif
#ifndef HUGE_VALF
  TEST_FIN(FAIL);
#endif
#ifndef HUGE_VALL
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


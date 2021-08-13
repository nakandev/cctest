// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

TESTCASE(c99_7_12_p6)
{
#ifndef FP_INFINITE
  TEST_FIN(FAIL);
#endif
#ifndef FP_NAN
  TEST_FIN(FAIL);
#endif
#ifndef FP_NORMAL
  TEST_FIN(FAIL);
#endif
#ifndef FP_SUBNORMAL
  TEST_FIN(FAIL);
#endif
#ifndef FP_ZERO
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

TESTCASE(c99_7_12_p7)
{
#ifndef FP_FAST_FMA
  TEST_FIN(FAIL);
#endif
/* optionally */
#if 0
#ifndef FP_FAST_FMAF
  TEST_FIN(FAIL);
#endif
#ifndef FP_FAST_FMAL
  TEST_FIN(FAIL);
#endif
#endif
  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

TESTCASE(c99_7_3_1_p2)
{
#ifndef complex
  TEST_FIN(FAIL);
#else
#ifndef _Complex_I
  TEST_FIN(FAIL);
#else
  float complex       xf  = 1.0 + 2.0 * _Complex_I;
  double complex      xd  = 2.0 + 3.0 * _Complex_I;
  long double complex xld = 4.0 + 5.0 * _Complex_I;
  TEST_FIN(PASS);
#endif
#endif
}


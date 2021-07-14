// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

TESTCASE(c99_7_3_1_p4)
{
#ifndef I
  TEST_FIN(FAIL)
#else
  float complex         xf   = 1.0 + 2.0 * I;
  double complex        xd   = 2.0 + 3.0 * I;
  long double complex   xld  = 4.0 + 5.0 * I;
#ifdef __STD_IEC_559_COMPLEX__
  float imaginary       xfi  = 1.1 + 2.1 * I;
  double imaginary      xdi  = 2.1 + 3.1 * I;
  long double imaginary xldi = 4.1 + 5.1 * I;
#endif
  TEST_FIN(PASS);
#endif
}


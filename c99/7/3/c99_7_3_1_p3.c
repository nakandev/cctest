// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

TESTCASE(c99_7_3_1_p3)
{
#ifdef __STD_IEC_559_COMPLEX__
#ifndef imaginary
  TEST_FIN(FAIL);
#else
#ifndef _Imaginary_I
  TEST_FIN(FAIL);
#else
  float imaginary       xf  = 1.0 + 2.0 * _Imaginary_I;
  double imaginary      xd  = 2.0 + 3.0 * _Imaginary_I;
  long double imaginary xld = 4.0 + 5.0 * _Imaginary_I;
  TEST_FIN(PASS);
#endif
#endif
#else
  TEST_FIN(UNSUPPORTED);
#endif
}


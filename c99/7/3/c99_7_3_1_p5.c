// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

TESTCASE(c99_7_3_1_p5)
{
#undef complex
#define complex 3
  if(complex != 3) TEST_FIN(FAIL);
#ifdef __STD_IEC_559_COMPLEX__
#undef imaginary
#define imaginary 4
  if(imaginary != 4) TEST_FIN(FAIL);
#endif
#undef I
#define I 5
  if(I != 5) TEST_FIN(FAIL);
  TEST_FIN(PASS);
}


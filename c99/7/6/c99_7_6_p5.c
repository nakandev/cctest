// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

TESTCASE(c99_7_6_p5)
{
#ifndef FE_DIVBYZERO
  TEST_FIN(FAIL);
#endif
#ifndef FE_INEXACT
  TEST_FIN(FAIL);
#endif
#ifndef FE_INVALID
  TEST_FIN(FAIL);
#endif
#ifndef FE_OVERFLOW
  TEST_FIN(FAIL);
#endif
#ifndef FE_UNDERFLOW
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


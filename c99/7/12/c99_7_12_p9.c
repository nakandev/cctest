// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

TESTCASE(c99_7_12_p9)
{
#ifndef MATH_ERRNO
  TEST_FIN(FAIL);
#endif
#ifndef MATH_ERREXCEPT
  TEST_FIN(FAIL);
#endif
#ifndef math_errhandling
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

TESTCASE(c99_7_12_p8)
{
#ifndef FP_ILOGB0
  TEST_FIN(FAIL);
#endif
#ifndef FP_ILOGBNAN
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

TESTCASE(c99_7_12_p2)
{
  float_t a;
  double_t b;
#ifndef FLT_EVAL_METHOD
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


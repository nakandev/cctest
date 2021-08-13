// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

TESTCASE(c99_7_12_2)
{
#pragma STDC FP_CONTRACT ON
#pragma STDC FP_CONTRACT OFF
#pragma STDC FP_CONTRACT DEFAULT
  TEST_FIN(PASS);
}


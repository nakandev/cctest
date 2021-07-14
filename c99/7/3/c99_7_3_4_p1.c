// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

TESTCASE(c99_7_3_4_p1)
{
#pragma STDC CX_LIMITED_RANGE ON
#pragma STDC CX_LIMITED_RANGE OFF
#pragma STDC CX_LIMITED_RANGE DEFAULT
  TEST_FIN(PASS);
}


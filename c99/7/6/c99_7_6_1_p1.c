// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

TESTCASE(c99_7_6_1_p1)
{
#pragma STDC FENV_ACCESS ON
#pragma STDC FENV_ACCESS OF
#pragma STDC FENV_ACCESS DEFAULT
  TEST_FIN(PASS);
}


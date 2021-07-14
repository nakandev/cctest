// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

TESTCASE(c99_7_6_p6)
{
#ifndef FE_ALL_EXCEPT
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


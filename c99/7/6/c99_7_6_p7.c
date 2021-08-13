// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

TESTCASE(c99_7_6_p7)
{
#ifndef FE_DOWNWARD
  TEST_FIN(FAIL);
#endif
#ifndef FE_TONEAREST
  TEST_FIN(FAIL);
#endif
#ifndef FE_TOWARDZERO
  TEST_FIN(FAIL);
#endif
#ifndef FE_UPWARD
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

TESTCASE(c99_7_6_p4)
{
  fexcept_t a;
  TEST_FIN(PASS);
}


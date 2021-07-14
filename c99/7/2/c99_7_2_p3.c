// RUN: test $? -eq 134 -o $? -eq 2

#include "testutil.h"
#include <assert.h>

TESTCASE(c99_7_2_p1)
{
  assert(0);

  TEST_FIN(XPASS);
}


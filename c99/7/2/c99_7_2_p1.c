// RUN: test $? -eq 0

#include "testutil.h"
#define NDEBUG
#include <assert.h>

TESTCASE(c99_7_2_p1)
{
  assert(0);

  TEST_FIN(PASS);
}


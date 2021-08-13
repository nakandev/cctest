// RUN: test $? -eq 0

#include "testutil.h"
#include <assert.h>
#define NDEBUG
#include <assert.h>

TESTCASE(c99_7_2_p1)
{
  assert(0);

  return 0;
}



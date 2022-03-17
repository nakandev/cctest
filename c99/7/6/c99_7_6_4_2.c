// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

struct _TestParam {
  fenv_t env;
  int ret;
} param[] = {
  {0, 0},
};

TESTCASE(c99_7_6_4_2)
{
  if(fegetenv() < 0) {
    TEST_FIN(UNSUPPORTED);
  }

  if(feholdenv(&param[i].env) != 0) {
    TEST_FIN(FAIL);
  }
  TEST_FIN(PASS);
}


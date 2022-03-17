// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

struct _TestParam {
  fenv_t env;
  int ret;
} param[] = {
  {0 , 0},
};

TESTCASE(c99_7_6_4_4)
{
  param[0].env = *FE_DFL_ENV;

  if(fegetenv() < 0) {
    TEST_FIN(UNSUPPORTED);
  }

  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if(feupdateenv(&param[i].env) != 0) {
      TEST_FIN(FAIL);
    }
    if(fegetenv(&param[i].env) != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


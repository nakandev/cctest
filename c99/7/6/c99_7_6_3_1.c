// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

struct _TestParam {
  int round_dir;
  int ret;
} param[] = {
  {FE_DOWNWARD, FE_DOWNWARD},
};

TESTCASE(c99_7_6_3_1)
{
  if(fegetround() < 0) {
    TEST_FIN(UNSUPPORTED);
  }

  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if(fesetround(param[i].round_dir) != 0) {
      TEST_FIN(FAIL);
    }
    if(fegetround() != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


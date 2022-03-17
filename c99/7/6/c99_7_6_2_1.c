// RUN: test $? -eq 0

#include "testutil.h"
#include <fenv.h>

struct _TestParam {
  int excepts;
  int ret;
} param[] = {
  {0, 0},
};

TESTCASE(c99_7_6_2_1)
{
  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if((feclearexcept(param[i].excepts) != 0) != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}

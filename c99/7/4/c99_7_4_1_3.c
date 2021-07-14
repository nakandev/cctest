// RUN: test $? -eq 0

#include "testutil.h"
#include <ctype.h>

struct _TestParam {
  int c;
  int ret;
} param[] = {
  {(int)' ' , !0,},
  {(int)'\t', !0,},
  {(int)'\n', 0,},
  {(int)'A' , 0,},
};

TESTCASE(c99_7_4_1_3)
{
  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if((isblank(param[i].c) != 0) != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


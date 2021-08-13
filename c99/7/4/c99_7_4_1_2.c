// RUN: test $? -eq 0

#include "testutil.h"
#include <ctype.h>

struct _TestParam {
  int c;
  int ret;
} param[] = {
  {(int)'a', !0,},
  {(int)'Z', !0,},
  {(int)'0', 0,},
};

TESTCASE(c99_7_4_1_2)
{
  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if((isalpha(param[i].c) != 0) != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <ctype.h>

struct _TestParam {
  int c;
  int ret;
} param[] = {
  {(int)'a', !0,},
  {(int)'Z', !0,},
  {(int)'0', !0,},
  {(int)'9', !0,},
};

TESTCASE(c99_7_4_1_1)
{
  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if((isalnum(param[i].c) != 0) != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


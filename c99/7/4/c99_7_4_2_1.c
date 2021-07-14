// RUN: test $? -eq 0

#include "testutil.h"
#include <ctype.h>

struct _TestParam {
  int c;
  int ret;
} param[] = {
  {(int)'a', (int)'a',},
  {(int)'z', (int)'z',},
  {(int)'A', (int)'a',},
  {(int)'Z', (int)'z',},
  {(int)'0', (int)'0',},
  {(int)'9', (int)'9',},
};

TESTCASE(c99_7_4_2_1)
{
  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if(tolower(param[i].c) != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <ctype.h>

struct _TestParam {
  int c;
  int ret;
} param[] = {
  {(int)'a', (int)'A',},
  {(int)'z', (int)'Z',},
  {(int)'A', (int)'A',},
  {(int)'Z', (int)'Z',},
  {(int)'0', (int)'0',},
  {(int)'9', (int)'9',},
};

TESTCASE(c99_7_4_2_2)
{
  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if(toupper(param[i].c) != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


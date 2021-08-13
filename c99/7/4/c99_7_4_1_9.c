// RUN: test $? -eq 0

#include "testutil.h"
#include <ctype.h>

struct _TestParam {
  int c;
  int ret;
} param[] = {
  // {(int)1   , !0,},
  {(int)'a' , 0,},
  {(int)'Z' , 0,},
  {(int)'0' , 0,},
  {(int)'9' , 0,},
  {(int)' ' , 0,},
  {(int)'\f', 0,},
  {(int)'\n', 0,},
  {(int)'\r', 0,},
  {(int)'\t', 0,},
  {(int)'\v', 0,},
};

TESTCASE(c99_7_4_1_9)
{
  for(int i=0; i<ARRAY_SIZEOF(param); i++) {
    if((ispunct(param[i].c) != 0) != param[i].ret) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


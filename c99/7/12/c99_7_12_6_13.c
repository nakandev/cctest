// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

#define FLT_RADIX 2

struct _TestParam1 {
  double valx;
  int valn;
  double exp;
} param1[] = {
  {
    1.0,
    1,
    2.0,
  },
};
struct _TestParam2 {
  float valx;
  int valn;
  float exp;
} param2[] = {
  {
    1.0,
    1,
    2.0,
  },
};
struct _TestParam3 {
  long double valx;
  int valn;
  long double exp;
} param3[] = {
  {
    1.0,
    1,
    2.0,
  },
};

TESTCASE(c99_7_12_6_13)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(scalbn(param1[i].valx, param1[i].valn) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(scalbnf(param2[i].valx, param2[i].valn) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(scalbnl(param3[i].valx, param3[i].valn) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }

  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(scalbln(param1[i].valx, param1[i].valn) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(scalblnf(param2[i].valx, param2[i].valn) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(scalblnl(param3[i].valx, param3[i].valn) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }

  TEST_FIN(PASS);
}


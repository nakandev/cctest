// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double val;
  int exp;
} param1[] = {
  {
    3.0,
    1,
  },
};
struct _TestParam2 {
  float val;
  int exp;
} param2[] = {
  {
    3.0,
    1,
  },
};
struct _TestParam3 {
  long double val;
  int exp;
} param3[] = {
  {
    3.0,
    1,
  },
};

TESTCASE(c99_7_12_6_1)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(ilogb(param1[i].val) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(ilogbf(param2[i].val) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(ilogbl(param3[i].val) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double val;
  double exp;
} param1[] = {
  {
    1.0,
    1.57079632679489662,
  },
};
struct _TestParam2 {
  float val;
  float exp;
} param2[] = {
  {
    1.0,
    1.57079633F,
  },
};
struct _TestParam3 {
  long double val;
  long double exp;
} param3[] = {
  {
    1.0,
    1.570796326794896619231L,
  },
};

TESTCASE(c99_7_12_4_2)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(!D_EQ(asin(param1[i].val), param1[i].exp)) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(!F_EQ(asinf(param2[i].val), param2[i].exp)) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(!L_EQ(asinl(param3[i].val), param3[i].exp)) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


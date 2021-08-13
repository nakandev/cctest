// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

struct _TestParam1 {
  double complex val;
  double complex exp;
} param1[] = {
  {
    1.0,
    0.7615941559557648881195,
  },
};

struct _TestParam2 {
  float complex val;
  float complex exp;
} param2[] = {
  {
    1.0,
    0.7615941559557648881195F,
  },
};

struct _TestParam3 {
  long double complex val;
  long double complex exp;
} param3[] = {
  {
    1.0,
    0.7615941559557648881195L,
  },
};

TESTCASE(c99_7_3_6_6)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(!CD_EQ(ctanh(param1[i].val), param1[i].exp)) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(!CF_EQ(ctanhf(param2[i].val), param2[i].exp)) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(!CL_EQ(ctanhl(param3[i].val), param3[i].exp)) {
      TEST_FIN(FAIL);
    }
  }

  TEST_FIN(PASS);
}


// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

#define FLT_TRUE_MIN 1E-38

struct _TestParam1 {
  float val;
  int exp;
} param1[] = {
  {NAN, FP_NAN},
  {INFINITY, FP_INFINITE},
  {1.0, FP_NORMAL},
  {FLT_TRUE_MIN, FP_SUBNORMAL},
  {0.0, FP_ZERO},
};
struct _TestParam2 {
  double val;
  int exp;
} param2[] = {
  {NAN, FP_NAN},
  {INFINITY, FP_INFINITE},
  {1.0, FP_NORMAL},
  {FLT_TRUE_MIN, FP_SUBNORMAL},
  {0.0, FP_ZERO},
};

TESTCASE(c99_7_12_3_1)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(fpclassify(param1[i].val) != param1[i].exp) {
      printf("1val[%d]=%d\n", i, fpclassify(param1[i].val));
      printf("1exp[%d]=%d\n", i, param1[i].exp);
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(fpclassify(param2[i].val) != param2[i].exp) {
      printf("2val[%d]=%d\n", i, fpclassify(param2[i].val));
      printf("2exp[%d]=%d\n", i, param2[i].exp);
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


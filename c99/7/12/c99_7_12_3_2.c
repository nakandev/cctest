// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

#define FLT_TRUE_MIN 1E-37

struct _TestParam1 {
  float val;
  int exp;
} param1[] = {
  {NAN, 0},
  {INFINITY, 0},
  {1.0, 1},
  {FLT_TRUE_MIN, 1},
  {0.0, 1},
};
struct _TestParam2 {
  double val;
  int exp;
} param2[] = {
  {NAN, 0},
  {INFINITY, 0},
  {1.0, 1},
  {FLT_TRUE_MIN, 1},
  {0.0, 1},
};

TESTCASE(c99_7_12_3_2)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if((isfinite(param1[i].val) != 0) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if((isfinite(param2[i].val) != 0) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}


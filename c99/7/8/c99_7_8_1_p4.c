// RUN: test $? -eq 0

#include "testutil.h"
#include <inttypes.h>

TESTCASE(c99_7_8_1_p4)
{
  {
    int32_t x = 1;
    fscanf(SCNd32, &x);
    fscanf(SCNi32, &x);
  }
  {
    int_least32_t x = 1;
    fscanf(SCNdLEAST32, &x);
    fscanf(SCNiLEAST32, &x);
  }
  {
    int_fast32_t x = 1;
    fscanf(SCNdFAST32, &x);
    fscanf(SCNiFAST32, &x);
  }
  {
    intmax_t x = 1;
    fscanf(SCNdMAX, &x);
    fscanf(SCNiMAX, &x);
  }
  {
    intptr_t x;
    fscanf(SCNdPTR, x);
    fscanf(SCNiPTR, x);
  }

  TEST_FIN(PASS);
}


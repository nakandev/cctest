// RUN: test $? -eq 0

#include "testutil.h"
#include <stdint.h>

TESTCASE(c99_7_18_1_3)
{
  int_fast8_t   i8;
  int_fast16_t  i16;
  int_fast32_t  i32;
  int_fast64_t  i64;
  uint_fast8_t  u8;
  uint_fast16_t u16;
  uint_fast32_t u32;
  uint_fast64_t u64;
  TEST_FIN(PASS);
}


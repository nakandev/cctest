// RUN: test $? -eq 0

#include "testutil.h"
#include <stdint.h>

TESTCASE(c99_7_18_1_2)
{
  int_least8_t   i8;
  int_least16_t  i16;
  int_least32_t  i32;
  int_least64_t  i64;
  uint_least8_t  u8;
  uint_least16_t u16;
  uint_least32_t u32;
  uint_least64_t u64;
  TEST_FIN(PASS);
}


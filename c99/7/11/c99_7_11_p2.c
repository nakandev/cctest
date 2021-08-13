// RUN: LC_ALL=C test $? -eq 0

#include "testutil.h"
#include <locale.h>

TESTCASE(c99_7_11_p2)
{
  struct lconv a;
  a.decimal_point;       // "."
  a.thousands_sep;       // ""
  a.grouping;            // ""
  a.mon_decimal_point;   // ""
  a.mon_thousands_sep;   // ""
  a.mon_grouping;        // ""
  a.positive_sign;       // ""
  a.negative_sign;       // ""
  a.currency_symbol;     // ""
  a.frac_digits;         // CHAR_MAX
  a.p_cs_precedes;       // CHAR_MAX
  a.n_cs_precedes;       // CHAR_MAX
  a.p_sep_by_space;      // CHAR_MAX
  a.n_sep_by_space;      // CHAR_MAX
  a.p_sign_posn;         // CHAR_MAX
  a.n_sign_posn;         // CHAR_MAX
  a.int_curr_symbol;     // ""
  a.int_frac_digits;     // CHAR_MAX
  a.int_p_cs_precedes;   // CHAR_MAX
  a.int_n_cs_precedes;   // CHAR_MAX
  a.int_p_sep_by_space;  // CHAR_MAX
  a.int_n_sep_by_space;  // CHAR_MAX
  a.int_p_sign_posn;     // CHAR_MAX
  a.int_n_sign_posn;     // CHAR_MAX
  TEST_FIN(PASS);
}


#ifndef __NKUTIL_H__
#define __NKUTIL_H__

#define TESTCASE(str) int main(void)

#define PASS         0
#define FAIL         51
#define XPASS        52  // non-expected pass
#define XFAIL        53  // expected fail
#define UNSUPPORTED  54
#define TEST_FIN(code) return (code)

#define ARRAY_SIZEOF(x) (sizeof(x)/sizeof(x[0]))

extern int F_EQ(float a, float b);
extern int D_EQ(double a, double b);
extern int L_EQ(long double a, long double b);

extern int CF_EQ(float _Complex a, float _Complex b);
extern int CD_EQ(double _Complex a, double _Complex b);
extern int CL_EQ(long double _Complex a, long double _Complex b);

#endif /*__NKUTIL_H__*/


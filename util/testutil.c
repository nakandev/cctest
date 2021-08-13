int F_EQ(float a, float b)
{
  const float epsilon = 1E-5;
  float amb = a - b;
  float abs = amb >= 0 ? amb : -amb;
  if (abs < epsilon)
    return 1;
  return 0;
}

int D_EQ(double a, double b)
{
  const double epsilon = 1E-10;
  double amb = a - b;
  double abs = amb >= 0 ? amb : -amb;
  if (abs < epsilon)
    return 1;
  return 0;
}

int L_EQ(long double a, long double b)
{
  const long double epsilon = 1E-15;
  long double amb = a - b;
  long double abs = amb >= 0 ? amb : -amb;
  if (abs < epsilon)
    return 1;
  return 0;
}

extern double creal(double _Complex);
extern float crealf(float _Complex);
extern long double creall(long double _Complex);
extern double cimag(double _Complex);
extern float cimagf(float _Complex);
extern long double cimagl(long double _Complex);

int CF_EQ(float _Complex a, float _Complex b)
{
  const float epsilon = 1E-5;
  float _Complex amb = a - b;
  float r = crealf(amb);
  float i = cimagf(amb);
  float absr = r >= 0 ? r : -r;
  float absi = i >= 0 ? i : -i;
  if (absr < epsilon && absi < epsilon)
    return 1;
  return 0;
}

int CD_EQ(double _Complex a, double _Complex b)
{
  const double epsilon = 1E-5;
  double _Complex amb = a - b;
  double r = creal(amb);
  double i = cimag(amb);
  double absr = r >= 0 ? r : -r;
  double absi = i >= 0 ? i : -i;
  if (absr < epsilon && absi < epsilon)
    return 1;
  return 0;
}

int CL_EQ(long double _Complex a, long double _Complex b)
{
  const long double epsilon = 1E-5;
  long double _Complex amb = a - b;
  long double r = creall(amb);
  long double i = cimagl(amb);
  long double absr = r >= 0 ? r : -r;
  long double absi = i >= 0 ? i : -i;
  if (absr < epsilon && absi < epsilon)
    return 1;
  return 0;
}


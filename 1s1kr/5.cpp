#include <iostream>
#include <math.h>
using namespace std;

void main()
{
  const float e = 0.000001;
  double slag = 1;
  const double PI = 3.141592653589793;
  double res = PI / 2;
  int n = 1;
  const double x = 9;
  while ((slag > 0 ? slag : -slag) > e)
  {
    slag = pow(-1, n) / (2 * n - 1) / pow(x, 2 * n - 1);
    res += slag;
    n += 1;
  }

  cout << "Result: " << res << endl;
  cout << "arctg(" << x << ") = " << atan(x) << endl;
}
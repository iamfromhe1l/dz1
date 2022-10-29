#include <iostream>
using namespace std;

void main()
{
  int n;
  cout << "Write num: ";
  cin >> n;
  int summ = 0;
  for (int i = 1; i <= n; i++)
  {
    summ += i;
  }
  cout << "Summ: " << summ << endl;
}
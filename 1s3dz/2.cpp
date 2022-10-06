#include <iostream>
using namespace std;

void main()
{
  const int n = 7;
  int mas[n], sum = 0;
  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << " elem: ";
    cin >> mas[i];
    sum += mas[i];
  }
  cout << endl
       << "Result: " << sum / n << endl;
}
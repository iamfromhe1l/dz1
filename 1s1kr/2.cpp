#include <iostream>
using namespace std;

void main()
{
  const int n = 10;
  int summ = 0, count = 0, num;
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    if (num % 7 == 0)
    {
      summ += num;
      count += 1;
    }
  }
  cout << "Result: " << double(summ) / count << endl;
}
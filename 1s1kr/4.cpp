#include <iostream>
#include <vector>
using namespace std;

void main()
{
  int num10 = 549;
  vector<bool> num2;
  while (num10 > 0)
  {
    num2.push_back(num10 % 2);
    num10 /= 2;
  }
  reverse(num2.begin(), num2.end());
  for (int i = 0; i < num2.size(); i++)
  {
    cout << num2[i];
  }
  cout << endl;
}
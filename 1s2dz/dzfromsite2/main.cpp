#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void main()
{
  vector<vector<int>> array;
  int n, m;
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter m: ";
  cin >> m;
  cout << endl;
  cout << "Input array:" << endl;
  for (int i = 0; i < n; i++)
  {
    vector<int> dopArray;
    for (int j = 0; j < m; j++)
    {
      int randomNumber = 1 + rand() % 100;
      dopArray.push_back(randomNumber);
      cout << setw(10) << randomNumber;
    }
    array.push_back(dopArray);
    cout << endl;
  }
  int count7 = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (array[i][j] % 7 == 0)
      {
        count7++;
      }
    }
  }

  cout << endl;
  cout << "Count7: " << count7 << endl;
}
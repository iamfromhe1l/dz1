#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

vector<vector<int>> getRandomArray(int n, int m)
{
  vector<vector<int>> arr;
  for (int i = 0; i < m; i++)
  {
    vector<int> inArr;
    for (int j = 0; j < n; j++)
    {
      int randomNum = 1 + rand() % 100;
      inArr.push_back(randomNum);
      cout << setw(4) << randomNum;
    }
    arr.push_back(inArr);
    cout << endl;
  }
  return arr;
}

void coutArray(vector<vector<int>> arr)
{
  cout << "Output Array: " << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[0].size(); j++)
    {
      cout << setw(4) << arr[i][j];
    }
    cout << endl;
  }
}

void main()
{
  int n, m;
  cout << "Write n: ";
  cin >> n;
  cout << "Write m: ";
  cin >> m;

  int maxE = 0;
  vector<int> maxEIdx = {0, 0};

  int minE = 1000;
  vector<int> minEIdx = {0, 0};

  cout << "Random array n*m: " << endl;
  vector<vector<int>> arr = getRandomArray(n, m);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] > maxE)
      {
        maxE = arr[i][j];
        maxEIdx = {i, j};
      }
      if (arr[i][j] < minE)
      {
        minE = arr[i][j];
        minEIdx = {i, j};
      }
    }
  }
  cout << endl;

  cout << "Max Element: " << maxE << endl;
  cout << "Max Element index: " << maxEIdx[0] << ", " << maxEIdx[1] << endl;
  cout << endl;

  cout << "Min Element: " << minE << endl;
  cout << "Min Element index: " << minEIdx[0] << ", " << minEIdx[1] << endl;
  cout << endl;
  cout << arr[0][0] << endl;

  arr[minEIdx[0]][minEIdx[1]] = maxE;
  arr[maxEIdx[0]][maxEIdx[1]] = minE;

  coutArray(arr);
}
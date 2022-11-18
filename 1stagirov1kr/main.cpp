#include <string>
#include <iostream>
#include <vector>

using namespace std;

int z1(int n, string S)
{
  int countS = 0;
  int maxCountS = 0;
  for (int i = 0; i < 2 * n; i++)
  {
    if (S[i] == 'S')
    {
      countS++;
      if (maxCountS < countS)
      {
        maxCountS = countS;
        if (maxCountS > n)
        {
          cout << "Error: S count > n" << endl;
          return 0;
        }
      }
    }
    else
    {
      countS--;
      if (countS < 0)
      {
        cout << "Error: S count < 0" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 1;
}

// c учетом, что на вход дается возмодный вариант выходного порядка вагонов
string z2(string S, int N)
{
  string res;
  vector<int> stackToIn;
  for (int i = 1; i <= N; i++)
  {
    stackToIn.push_back(i);
  }
  vector<int> stackToOut;
  for (int i = 0; i < N; i++)
  {
    int e = S[i];
    e -= 48;
    if (stackToIn.size() != 0 && stackToIn[0] == e)
    {
      stackToIn.erase(stackToIn.begin());
      res.append("SX");
    }
    else if (stackToOut.size() != 0 && stackToOut[stackToOut.size() - 1] == e)
    {
      stackToOut.pop_back();
      res.append("X");
    }
    else
    {
      int q = stackToIn.size();
      stackToOut.push_back(stackToIn[0]);
      stackToIn.erase(stackToIn.begin());
      while (stackToOut[stackToOut.size() - 1] != e)
      {
        if (q == 0)
        {
          cout << "Error" << endl;
          return "";
        }
        q -= 1;
        stackToOut.push_back(stackToIn[0]);
        stackToIn.erase(stackToIn.begin());
        res.append("S");
      }
      stackToOut.pop_back();
      res.append("SX");
    }
  }
  return res;
}
// 453268791
// SSSSXSXXXSXSSXXSXX
void main()
{
  z1(9, "SSXSXSSXSXSXSXSXXX");
  cout << z2("534268791", 9) << endl;
}
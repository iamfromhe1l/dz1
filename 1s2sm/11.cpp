#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

void print(int mas[], const int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << setw(3) << mas[i];
  }
  cout << endl;
}

void z_1()
{
  const int n = 15;
  int summ = 0;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    int num = rand() % 41 - 10;
    summ += num;
    a[i] = num;
    cout << setw(4) << a[i];
  }
  summ /= n;
  cout << endl
       << "Sr_Znach: " << summ << endl;
}

void z_2()
{
  const int n = 10;
  int summ = 0;
  int a[n];
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    int num = 10 + rand() % 50;
    a[i] = num;
    if (i % 2 == 0)
    {
      if (max < num)
      {
        max = num;
      }
    }
    cout << setw(4) << a[i];
  }
  cout << endl
       << "Max: " << max << endl;
}

void z_3()
{
  const int n = 15;
  int min_e = INT16_MAX, min_idx;
  int A[n];
  for (int i = 0; i < n; i++)
  {
    int num = 10 + rand() % 91;
    A[i] = num;
    if (num < min_e)
    {
      min_e = num;
      min_idx = i;
    }
  }
  cout << "In: ";
  print(A, n);
  swap(A[0], A[min_idx]);
  cout << "Out: ";
  print(A, n);
}

void z_4()
{
  const int n = 15;
  int A[n];
  cout << "In Array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  int min_e = INT16_MAX;
}

void z_10()
{
  const int n = 5;
  int mas[n];
  int max_idx, min_idx = -1;
  int min_num = 100, max_num = -100;
  for (int i = 0; i < n; i++)
  {
    cin >> mas[i];
    if (mas[i] < min_num)
    {
      min_num = mas[i];
      min_idx = i;
    }
    if (mas[i] > max_num)
    {
      max_num = mas[i];
      max_idx = i;
    }
  }
  cout << "In array: ";
  print(mas, n);
  swap(mas[min_idx], mas[max_idx]);
  cout << "Out array: ";
  print(mas, n);
}

void z_11()
{
  const int n = 5;
  int mas[n];
  double d_mas[n];
  for (int i = 0; i < n; i++)
  {
    cin >> mas[i];
    d_mas[i] = 0.5 * mas[i];
  }
  cout << setw(3) << "X"
       << "   "
       << "Y" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << setw(3) << mas[i] << "   " << d_mas[i] << endl;
  }
}

void z_12()
{
  const int n = 5;
  int mas[n];
  int even_idx = -1;
  for (int i = 0; i < n; i++)
  {
    cin >> mas[i];
    if (mas[i] % 2 == 0 && even_idx == -1)
    {
      even_idx = i + 1;
    }
  }
  print(mas, n);
  cout << endl
       << "First even num in position: " << even_idx << endl;
}

void z_13()
{
  const int n = 5;
  int A[n];
  int B[n];
  cout << "A: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  cout << "B: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
  }
  cout << endl;
  cout << "A: ";
  print(A, n);
  cout << "B: ";
  print(B, n);
  map<int, int[2]> mp;
  for (int i = 0; i < n; i++)
  {
    mp[A[i]][0] = 1;
    mp[B[i]][1] = 1;
  }
  map<int, int[2]>::iterator it = mp.begin();
  cout << "Out: ";
  for (; it != mp.end(); it++)
  {
    if (it->second[0] == 1 && it->second[1] == 1)
    {
      cout << setw(3) << it->first;
    }
  }
  cout << endl;
}

void z_14()
{
  const int n = 5;
  int A[n];
  int B[n];
  map<int, int[2]> mp;
  cout << "A: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  cout << "B: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
    mp[B[i]][1] = 1;
    mp[B[i]][0] += 1;
  }

  cout << endl;
  cout << "A: ";
  print(A, n);
  cout << "B: ";
  print(B, n);
  for (int i = 0; i < n; i++)
  {
    if (mp[A[i]])
    {
      cout << "Num: " << A[i] << ", Count: " << mp[A[i]][0] << endl;
    }
  }
}

void z_15()
{
  const int n = 6;
  int A[n];
  cout << "In Array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  cout << "Out: ";
  for (int i = 0; i < n; i++)
  {
    if (A[i] >= 0)
    {
      cout << A[i] << " ";
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (A[i] < 0)
    {
      cout << A[i] << " ";
    }
  }
  cout << endl;
}

void z_16()
{
  const int n = 5;
  int A[n];
  int B[n];
  map<int, int[2]> mp;
  cout << "A: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  cout << "B: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (A[i] <= 0)
    {
      B[i] *= 10;
    }
    else
    {
      B[i] = 0;
    }
  }
  cout << "Out: ";
  for (int i = 0; i < n; i++)
  {
    if (B[i] >= 0)
    {
      cout << B[i] << " ";
    }
  }
}

void z_17()
{
  const int n = 5;
  int m = n;
  int A[n];
  cout << "Array: " << endl;
  int summ = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
    if (A[i] >= 0)
    {
      summ += A[i];
      m -= 1;
    }
  }
  if (m == 0)
  {
    cout << "0" << endl;
  }
  else
  {
    cout << "Enum num: " << summ / m << endl;
  }
}

void main()
{
  z_3();
}
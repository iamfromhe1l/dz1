#include <iostream>
#include <vector>
using namespace std;
// из нечетного чилса нельзя получить сумму двух четных чисел => можно сделать массив четных чисел, только если все элементы массива четные
//Дан массив целых чисел. Надо взять элемент и разбить элемент на 2 положительных числа, которые в сумме дадут наше исходное число 8 = 5 + 3 За наименьшее число операций получить в массиве все элементы одинаковой четности либо все четные, либо все нечетные
int main()
{
  const int n = 10;
  int ch = 0;
  int mas[n * 2];
  cout << "Input: ";
  for (int i = 0; i < n; i++)
  {
    mas[i] = 0 + rand() % 100;
    cout << mas[i] << " ";
    if (mas[i] % 2 == 0)
    {
      ch++;
    }
  }
  cout << endl;
  if (ch == 0 || ch == n)
  {
    cout << "Все элементы уже одной четности!";
    return 1;
  }

  int m = 0;
  for (int i = 0; i < n; i++)
  {
    if (mas[i] % 2 == 0)
    {
      mas[i] -= 1;
      mas[n + m] = 1;
      m++;
    }
  }
  cout << "Output: ";
  for (int i = 0; i < n + m; i++)
  {
    cout << mas[i] << " ";
  }
  cout << endl;
  cout << "Operaion count: " << m << endl;
  return 1;
}
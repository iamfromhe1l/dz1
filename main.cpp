#include <vector>
#include <iostream>

using namespace std;

void getArrayElems(vector<int> arr, string title = "")
{
  cout << endl;
  cout << title << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << endl;
  }
}

void firstTask(int n)
{
  vector<int> arr;
  vector<int> resultArray;
  int elem;
  for (int i = 0; i < n; i++)
  {
    arr.push_back(rand());
  }
  int prevNum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (prevNum < arr[i])
    {
      resultArray.push_back(arr[i]);
      prevNum = arr[i];
    }
  }
  getArrayElems(arr, "Input array");
  getArrayElems(resultArray, "Output Array");
}

void secondTask()
{
  int procent;
  cout << "Write the fill percentage: ";
  cin >> procent;
  int i = 0;
  int count = 0;
  int arr[100];
  for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++)
  {
    arr[i] = 0;
  }
  while (count != procent)
  {
    i = 0 + rand() % 100;
    arr[i] = rand();
    count += 1;
  }
  for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++)
  {
    cout << i + 1 << ": " << arr[i] << endl;
  }
}
void thirdTask()
{
  vector<int> arr;
  cout << "Write values(enter 0 to complete): " << endl;
  int num;
  cin >> num;
  while (num != 0)
  {
    arr.push_back(num);
    cin >> num;
  }
  if (arr.size() % 2 == 1)
  {
    for (int i = arr.size() - 1; i != -1; i--)
    {
      arr.push_back(arr[i]);
    }
  }
  else
  {
    for (int i = arr.size() - 2; i != -1; i--)
    {
      arr.push_back(arr[i]);
    }
  }

  getArrayElems(arr, "Output array: ");
}

void fourthTask(float v0, float a)
{
  const float g = 9.8;
  cout << endl;
  float h = v0 * sin(a) / (2 * g);
  cout << "Flight altitude: " << h << "m." << endl;
  float s = v0 * sin(2 * a) / g;
  cout << "Flight length: " << s << "m." << endl;
  float t = 2 * v0 * sin(a) / g;
  cout << "Flight time: " << t << "sec." << endl;
  cout << endl;
  int dels;
  cout << "Write the number of divisions: ";
  cin >> dels;
  float thalf = t / dels;
  for (int i = 0; i < dels + 1; i++)
  {
    float y = v0 * sin(a) * thalf * i - g * pow(thalf * i, 2) / 2;
    float x = v0 * cos(a) * thalf * i;
    cout << "Time: " << thalf * i << "sec." << endl;
    cout << "x: " << x / 100 << "m."
         << ", y: " << y / 100 << "m." << endl;
    cout << endl;
  }
}

void main()
{
  int choose;
  while (true)
  {
    cout << "Choose Task(1-4): ";
    cin >> choose;
    if (choose == 1)
    {
      int n;
      cout << "Write array length: ";
      cin >> n;
      firstTask(n);
      cout << endl;
    }
    else if (choose == 2)
    {
      secondTask();
      cout << endl;
    }
    else if (choose == 3)
    {
      thirdTask();
      cout << endl;
    }
    else if (choose == 4)
    {
      float v0;
      float a;
      cout << "Write V0: ";
      cin >> v0;
      cout << "Write a: ";
      cin >> a;
      fourthTask(v0, a * 3.14159265358979323846 / 180);
    }
  }
  firstTask(10);
}

// 1ая задача
// Вывести возрастающую последовательность
// 1* 2* 3* 2 2 5* 6* 9*

// 2ая задача
// Input: процент заполнения массива (массив - 100 элементов)
// Заполнить массив на столько процентов числами в рандомных индексах

// 3яя задача
// Заполнить массив зеркально
// Пример: 1 2 3 3 2 1
// 1 2 3 4 3 2 1
// 1) 20 элементов
// 2) 21 элемент

// 4ая задача
// Вывести координаты тела, брошенного под углом А*, к горизонту с нач скоростью V м\с
// h = V(y)^2/2g
// S = V0*sin(2a)/g
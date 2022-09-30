#include <iostream>
#include <vector>

using namespace std;

struct Point
{
  int y, x;
};

vector<int> getCoords(int x, int y)
{
}

void main()
{
  vector<Point> arr;
  int x, y;
  cout << "Enter x: ";
  cin >> x;
  cout << "Enter y: ";
  cin >> y;
  arr.push_back(Point({y, x}));
  while (arr.size() != 0)
  {
  }
}
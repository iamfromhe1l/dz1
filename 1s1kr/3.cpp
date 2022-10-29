#include <iostream>
using namespace std;

void main()
{
  const float startPrice = 1001;
  if (startPrice > 500 && startPrice <= 1000)
  {
    cout << "Price: " << startPrice * 0.97 << endl;
  }
  else if (startPrice > 1000)
  {
    cout << "Price: " << startPrice * 0.95 << endl;
  }
  else
  {
    cout << "Price: " << startPrice << endl;
  }
}
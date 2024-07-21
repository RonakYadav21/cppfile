// to search an element in a array
#include <iostream>
using namespace std;
int main()
{
  int n, val, i, arr[10];
  cout << "enter the value of n ";
  cin >> n;
  cout << "enter element of the array";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "enter the value you want to find in array\n";
  cin >> val;
  for (i = 0; i < n; i++)
    if  (val== arr[i])

      cout << "number  is founded\n";

  return 0;
}

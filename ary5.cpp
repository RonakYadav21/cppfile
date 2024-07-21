// array in function
#include <iostream>
using namespace std;
int funct(int arr[])
{
  int i, n;
  cout << "enter the value of n ";
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int sum(int a[])
{
  int ar[10], sum;
  // for (int i = 0; i < n; i++)
  funct(ar);
    sum = sum + funct(ar);
  return(sum);
}

int main()
{
  int array[10];
  funct(array);
  sum(array);
  return 0;
}
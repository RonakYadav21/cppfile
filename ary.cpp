#include <iostream>
using namespace std;
int main()
{
   int n, i, max, min, arr[10];
   cout << "enter the 10 no.";
   for (i = 0; i < 10; i++)
   {
      cin >> arr[i];
   }
   min = max = arr[0];
   for (i = 0; i < 10; i++)
   {
      if (max < arr[i])
         max = arr[i];
      if (min > arr[i])
         min = arr[i];
   }
   cout << "max is " << max;
   cout << "min is " << min;

   return 0;
}
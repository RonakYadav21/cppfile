// to find max,min  and  second max ,second min in an array  
#include <iostream>
using namespace std;
int main(){
   int n, i, max, min, arr[10], smin ,smax;
   cout << "enter the 10 no.";
   for (i = 0; i < 10; i++){
      cin >> arr[i];
      }
   min = max = arr[0];
   for (i = 0; i < 10; i++){
      if (max < arr[i]){
          max=smax;
         max = arr[i];
      }
      else if 
         (max>smax && smax<arr[i]){
         smax=arr[i];
      }
      if (min > arr[i]){
          min=smin;
         min = arr[i];
       }
       else if
         ( min<smin && smin>arr[i]){
         smin=arr[i];
         }  
    }
   cout << "max is " << max<<"\n";
   cout << "min is  " << min<<"\n"; 
   cout << "smax is " <<smax<<"\n";
   cout << "smin is " << smin<<"\n";
   return 0;
}
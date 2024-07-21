#include<iostream >
using namespace std;
template< class T>
  T minimum (T a[],int size){
    T min=a[0];
     for(int i=0;i<size;i++){
        if(min>a[i]){
            min=a[i];
        }
     }
        return min;
     
  }
  int main(){
    int a[10],size,min1;
    float b[10];
    cout<<"enter size of array"<<endl;
     cin>>size;
     cout<<"enter the element of the aaray"<<endl;
     for(int i=0;i<size;i++){
        cin>>a[i];
     }
    cout<<"enter elements of  float  array"<<endl;
     for(int i=0;i<size;i++){
        cin>>b[i];
        }

   min1=minimum(a,size);
  cout<<"the minimmun elemnet in the array is "<<min1;
  cout<<"the minimmun elemnet in the array is "<<minimum(b,size);
  return 0;
  }
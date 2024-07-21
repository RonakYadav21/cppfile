#include<iostream>
using namespace std;

class myArr{
  int* arr;
  int size;
  public:
    myArr(int size){
      this->size=size;
      arr = new int[size];
    }
    
    void input(){
      for(int i=0;i<size;i++){
        cin>>arr[i];
      }
    }     
    
    void display(){
      for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
      }
      cout<<endl;
    }      
    
    int bsearch(int);
};

int myArr::bsearch(int key){
   int s=0;
   int e=size-1;
   int mid= s+(e-s)/2;
   while(s<e){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
   }

  return -1;
}


int main(){
  myArr a(5);
  a.input();
  a.display();
  cout<<a.bsearch(3);
 return 0;
}

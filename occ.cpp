#include<iostream>
using namespace std;
int occ(int *arr,int n,int key, int f,int l){
    int i,count=0;
    for(i=0;i<n;i++){
        if(arr[i]==key){
          if(f==-1){
            f=i;
          }
          l=i;
          count++;
        }
    }
    // cout<<"frist occ of the element is at index " <<f<<endl;
    // cout<<"last occ of the element is at index "<<l<<endl;
    // return count;
    // we can return multiple value from a function by passingpointer to an array
    // return f;
    // return l;
  
}
int main(){
  int n,l,f,i,key;
  f=l=-1;
  cout<<"entr n";
  cin>>n;
  int arr[n];
  cout<<"enter array element"<<endl;
  for(i=0;i<n;i++)
  cin>>arr[i];
  cout<<"enter key element"<<endl;
  cin>>key;
//  occ(arr,n,key,f,l);
 cout<< "key element occured "<<occ(arr,n,key,f,l)<<" time";
cout<< occ(arr,n,key,f,l);
//  occ(arr,n,key,f,l);
 

return 0;
}
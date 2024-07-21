#include<iostream>
using namespace std;
#define size 7 
class bsearch{
    int arr[size];
    public:
void getarray(){
    for( int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int binearysearch(int key){
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

    void dispaly(){
        int i;
        for(i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    bsearch a;
    a.getarray();
    a.dispaly();
 a.binarysearch(3);
    a.dispaly();
    return 0;
}

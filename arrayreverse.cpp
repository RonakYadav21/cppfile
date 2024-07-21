#include<iostream>
using namespace std;
const int n=5;
class array{
    int arr[n];
    // int start,end;
public:
// array(){
//     start=0;
//     end=n-1;
// }
void getdata(){
    int i;
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }
}
void display(){
    int i;
    for(i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}
}
void reverse(){
    int temp,i;
    for(i=0;i<n-1;i++){
       temp = arr[i];
       arr[i]=arr[n-1-i];
       arr[n-1-i]=temp;
    }
    // void reverse(){
    //     int temp;
    //     while(start<end){
    //         temp=arr[start];
    //         arr[start]=arr[end];
    //         arr[end]=temp;
    //         start++;
    //         end--;
    //     }
    }

};
int main(){
    array A;
    A.getdata();
    // A.display(); 
    A.reverse();
    A.display(); 

 return 0;
}

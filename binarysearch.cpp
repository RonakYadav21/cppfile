#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end= size -1;
    int mid=(start+end)/2;
    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}
    int main(){
    int arr[5]={4,7,9,14,24};
    int index=binarysearch(arr,5,14);
    cout<<"index no for 14 is "<<index;

    return 0;
    }


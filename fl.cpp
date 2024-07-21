#include<iostream>
using namespace std;
int fristoccurence(int arr[],int size,int key){
    int start=0;
    int end= size -1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;

}
int lastoccurence(int arr[],int size,int key){
    int start=0;
    int end= size -1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;}


    int main(){
    int arr[6]={4,7,7,7,14,14};
    int index=fristoccurence(arr,6,7);
    cout<<"frist occ  for 14 is "<<index<<endl;
     int in=lastoccurence(arr,6,7);
    cout<<"last occ  for 14 is "<<in<<endl;;

    // no o time an element occured
    int time=in-index+1;
  cout<<"no of times an element occured is "<<time;

    return 0;
    }

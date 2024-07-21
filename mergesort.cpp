#include<iostream>
using namespace std;
mergesort(int arr[],int s,int e, int mid){
    int temp ;
    int k=0;;
    int i=s ;
    int j=mid+1;
    int a[e+1];
    while(i<=mid && j<=e){
       if( a[i]<=arr[j]){
        a[k]=arr[i];
        i++;
        }
        else{
            a[k]=arr[j];
            j++;
        }
    
        k++;
    }
    while(i<=mid){
        a[k]=arr[i];
        i++ ;
        k++;
    }
    while(j<=e){
        a[k]=arr[j];
        i++;
        k++;

    }
    for(i=s,k=0;i<=e,k<=e;i++,k++){
        arr[i]=a[k];
    }

}
void merge( int arr[] ,int s,int e){
    if (s>=e){
        return;
    }
   int  mid=s+(e-s)/2;
    merge(arr,s,mid);
    merge(arr,s,mid+1);
     mergesort( arr,s,e,mid);
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={34,67,12,3,4};
    int s=0;
    int n=5;

    merge(arr,0,4);
    display(arr,5);
    return 0;
}


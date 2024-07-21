#include<iostream>
using namespace std; 

void bubblesort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selectionsort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int linear(int arr[],int n ,int key){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
           return i;
        }
    }
    return -1;
}
 void insertionsort(int arr[],int n){
    int i;
    for( i=1;i<n;i++){
    int j=i-1;
    if(arr[j]>arr[i]&& j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=arr[i];
    }
 
}
dispaly( int arr[],int n){
    int i;
    for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[]={3,6,1,6,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    dispaly(arr,n);
    cout<<endl;
    selectionsort(arr,n);
    dispaly(arr,n);
    cout<<endl;
    cout<<"index of the key is "<<linear( arr,n,8);
    cout<<endl;
    insertionsort(arr,n);
    dispaly(arr,n);
    return 0;

}
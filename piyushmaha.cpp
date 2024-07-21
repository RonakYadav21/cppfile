#include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e)
{
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[e+1];
    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;k++;
        }
    
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= e)
    {
        temp[k] = arr[j];
        j++;
         k++;
    }

    for (i =s;i<e;i++)
    {
        arr[i] = temp[i];
    }
}
void mergesort(int arr[], int s, int e)
{
    if (s < e)
    {

    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1, e);
    merge(arr,s,mid,e);
    }
}
void dispaly(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
//    int n, i;
//    int s=0;
//    cout << "enter the size of array" << endl;
//    cin >> n;
//    int ar[n];
//    cout << "enter element of the array" << endl;
//    for (i = 0; i < n; i++)
//    {
//        cin >> ar[i];
//    }
//    mergesort(ar,s, n-1);
//     dispaly(ar,n);
//    cout << " sorted element" << endl;
//    dispaly(ar,n);
//	return 0;
int a[]={3,5,2,23,12,78,65};
int n=7;
dispaly(a,n);
mergesort(a,0,6);
dispaly(a,n);
return 0;
}

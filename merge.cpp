#include <iostream>
using namespace std;

void  merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;
    //    int *temp=new int[e-s];   dynamic array
    int temp[high-low];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
    
        }
        else
        {
            temp[k] = arr[j];
            j++;
        k++;
        }
    }
    while (i <=mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for ( i=low,k=0;i<high,k<high-low+1;i++,k++)
    { /*for static array*/
        arr[i] = temp[k];
    }
    //       for(i=s,k=0;i<=e;i++,k++){   for dynamic array
    //     arr[i]=temp[k];
    //    }
}
void mergesort(int arr[], int low, int high)
{
    if (low<high)
    {
    
    int mid = (low +high)/ 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
    }
}
void dispaly(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, i;
    int s = 0;
    cout << "enter n" << endl;
    cin >> n;
    int ar[n];
    cout << "enter element of the array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    dispaly(ar,n);
    mergesort(ar, s, n - 1 );
    cout << " sorted element" << endl;
    
    dispaly(ar, n);
    return 0;
}
// program to delete an element in an array
#include <iostream>
using namespace std;
int main()
{
    int i, n,  value, a[10], index ;
    cout << "enter the value of n";
    cin >> n;
    cout << "enter the elment of the array";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "enter the position";
    cin >> index;
    for (i = index; i <= n-1; i++)
    {
        a[i] = a[i+1];
    }
    cout << "array after deleting a number ";
    for (i = 0; i < n-1 ; i++)
        cout << "\t" << a[i];
    return 0;
}

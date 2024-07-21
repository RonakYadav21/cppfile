// program to insert a element inn an array
#include <iostream>
using namespace std;
int main()
{
    int i, n,  value, a[100], index, val;
    cout << "enter the value of n";
    cin >> n;
    cout << "enter the elment of the array";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "enter the value  ";
    cin >> val;
    cout << "enter the position";
    cin >> index;
    for (i = n - 1; i >= index; i--)
    {
        a[i + 1] = a[i];by 
    }
    a[index] = val;
    cout << "array after inserting a number ";
    for (i = 0; i < n + 1; i++)
        cout << "\t" << a[i];
    return 0;
}

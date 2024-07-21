#include <iostream>
using namespace std;
int funct(int array[])
{
    int i, min, max;
    for (i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    min = max = array[0];
    for (i = 0; i < 5; i++)
    {
        if (max < array[i])
            max = array[i];
        if (min > array[i])
            min = array[i];
    }
    cout << "max no is " << max << "\n";
    cout << "min no is " << min << "\n";
    return 0;
}
int main()
{
    int a[] = {2, 6, 8, 5, 3, 9};
    funct(a);
    return 0;
}

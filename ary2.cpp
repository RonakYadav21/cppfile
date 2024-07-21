#include <iostream>
using namespace std;
int main()
{
    int i, j, a[2][2], num, sum = 0, avg;

    cout << "enter the element of the frist matrix ";
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cin >> a[i][j];
    cout << "enter the element whom you want to search";
    cin >> num;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            if (num == a[i][j])

                cout << "enter number is founded i.e" << num << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = sum + a[i][j];
        }
    }
    cout << "sum of the array elemnets is " << sum << endl;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            avg = sum / 2;
        }
    }
    cout << "avg is " << avg;

    return 0;
}
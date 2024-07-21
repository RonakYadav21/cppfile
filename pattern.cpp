#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "n";
    cin >> n;
    // to print  rect star pattern
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    //

    // to print hollow rect pattern
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - 1; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else if (j == 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << endl;
    // half inverted pattern
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    cout << endl;
    //   half pyramid using no.
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            cout << i + 1;
        }
        cout << "\n";
    }
    // floyd's triangle
    int count = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
    //      butterfly pattern
    // *=row no space : 2*n-2*row no
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
    //    *
    //   * *
    //  * * *
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }

        cout << "\n";
    }

    return 0;
}
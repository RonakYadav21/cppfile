// additon of two matrix
#include <iostream>
using namespace std;
int main()
{
    int n, m ,i, j ;
    int a[2][2], b[2][2], c[2][2];
    cout << "enter the element of the  frist matrix\n";
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cin >> a[i][j];
    cout << "enter the elelment of the second matrix\n";
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cin >> b[i][j];
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            c[i][j] = a[i][j] + b[i][j]; 
         }
    }
     cout << "sum of the two matrix is"<<"\n";
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << c[i][j]<<"\t";
        }
    cout<<"\n";
    }

    return 0;
}

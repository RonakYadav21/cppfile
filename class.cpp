#include <iostream>
using namespace std;
class number
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int x, int y, int z);
    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "tne value of c is " << c << endl;
        cout << "tne value of d is " << d << endl;
        cout << "tne value of e is " << e << endl;
    }
};
void number ::setdata(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
    // cou<<"enter the value of a,b,c"<<endl;
    // cin>>x>>y>>z;
}
int main()
{
    number e1;
    e1.e = 45;
    e1.d = 87;
    e1.setdata(4, 6, 9);
    e1.getdata();
    return 0;
}

#include <iostream>
using namespace std;
class complex
{
private:
    int img;
    int real;

public:
    void setdata();
    void getdata()
    {
        cout << "sum of the real and imaginary no is "<< endl;
        cout << real << "+ i " << img;
    }
    void sum(complex c1, complex c2);
};
void complex ::setdata()
{
    cout << "enter the value of real and imagnary no. " << endl;
    cin >> real >> img;
}
void complex:: sum(complex c1,complex c2)
{
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}
int main()
{
    complex c1, c2,c3;
    c1.setdata();
    c2.setdata();
    c1.getdata();
    c2.getdata();
    c3.sum(c1, c2);
    c3.getdata();

    return 0;
}

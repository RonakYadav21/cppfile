#include <iostream>
using namespace std;
class complex
{
private:
    int  img;
    int real;

public:
    void setdata();
    void getdata()
    {
        cout << "sum of the real and imaginary no is "<< endl;
        cout << real << "+ i " << img;
    }
    friend  complex sum(complex , complex );
};
void complex ::setdata()
{
    
    cout << "enter the value of real and imagnary no. " << endl;
    cin >> real >> img;
}
complex sum(complex o1,complex o2)
{
    complex o3;
    o3.img=o1.img +o2.img;   
    o3.real=o1.real +o2.real;

    return o3;
     
}
int main()
{
    complex c1, c2,x;
    c1.setdata();
    c2.setdata();
    c1.getdata();
    c2.getdata();
    x=sum(c1, c2);
    x.getdata();

    return 0;
}

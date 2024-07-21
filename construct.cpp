#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex()
    {
        // cout << "enter the value of real and imagenary no. " << endl;
        // cin >> real >> img;
    }
    complex (int r,int i){
        real=r;
        img=i;

    }
    void display()
    {
        cout << real << "+ i" << img << endl;
    }
    friend complex operator+(complex, complex);
    complex operator++();
    complex operator++(int);

    void print(){
        cout<<"the value of real after increment is "<<real<<endl;
        cout<<"the value of img after increment is "<<img<<endl;

    }
        void print_data(){
        cout<<"the value of real after  post increment is "<<real<<endl;
        cout<<"the value of img after post increment is "<<img<<endl;
        }

};


complex operator+(complex a, complex b)
{
    complex y;
    y.real = a.real + b.real;
    y.img = a.img + b.img;
    return y;
}

complex  complex::operator++()
{
    complex y;
    y.real = ++ real;
    y.img = ++ img;
    return y;
}
complex complex::operator++(int )    //doubt
{
    complex temp ;
    temp.real= real++;
    temp.img =img++;
    return temp ;
}
int main()
{
    complex c(4,6);
    c.display();
    complex c1(9,0);
    c1.display();
    complex c2 =c+c1;
    c2.display();
    complex c3=++c;
    c3.print();
    complex c4=c1++;
    cout<<"after post increment "<<endl;
    c1.print_data();
    // c4.print_data();
    return 0;
}
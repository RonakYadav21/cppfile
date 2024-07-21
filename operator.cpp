#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    complex operator*(int a);
    void getdata()
    {
        cout << "sum of the real and imaginary no is ";
        cout << real << "+ i " << img<<endl;
    }
    void sub(){
        cout << "subtraction  of the real and imaginary no is ";
        cout << real << "- i " << img<<endl;
    }
    void mul(){
        cout<<"multiplication is "<<endl;
        cout<<real <<"and"<< img<<endl;
    }
    
          complex operator+(complex c2);
         friend complex operator-(complex c1, complex c2);
         friend complex operator*(int a , complex c2);

};
complex complex:: operator*(int a){
    complex x;
    x.real= real*2;
    x.img=img*2;
    return x;
}

complex complex:: operator+(complex c2)
{
    complex y;
   y. real = real + c2.real;
    y.img = img + c2.img;
    return y;
}
complex operator-(complex c1,complex c2)
{
    complex y;
   y. real = c1.real-c2.real;
    y.img = c1.img - c2.img;
    return y;
}
complex operator*(int a,complex c)
{
    complex y;
   y. real = a* c.real;      //only call by friend function 
    y.img = a* c.img;
    return y;
}

int main()
{    
    int a;
    complex c1(9,8); 
    complex c2(7,19);
    c1.getdata();
    c2.getdata();
    complex c3=c1+c2;
    c3.getdata();
    complex c4=c1-c2;
    c4.sub();
    // cout<<"enter the  value of innterger  value"<<endl;
    // cin>>n;
    complex c6=c2*2;
    c6.mul();
    cout<<"enter the  value of innterger  value"<<endl;
    cin>>a;
    complex c5=a*c1;
    c5.mul();
    return 0;
}

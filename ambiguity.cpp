#include <iostream>
using namespace std;
class A
{
public:
     void greet()
    {
        cout << "hellow"<<endl;;
    }
};
class B
{
public:
    void greet()
    {
        cout << "hellow everyone"<<endl;;
    }
};
class derived : public A, public B
{
public:
    void greet()
    {
        // A::greet();
        B::greet();
    }
};

int main()
{
    derived x;
    x.greet();
    x.A::greet();
    return 0;
}

// class d
// {
//     // private:
// public:
//     void greet()
//     {
//         cout << "hellow";
//     }
// };
// class c : public d
// {
//     //  public:
// };
// int main()
// {
//     c p;
//     p.greet();
//     return 0;
// }

#include <iostream>
using namespace std;
class A
{
public:
    void greek()
    {
        cout << "hellow " << endl;
    }
};
class B : public A
{
public:
    void greek()
    {
        cout << "good" << endl;
    }
};
int main()
{
    B b;
     b.A::greek();
    // b.greek();
    return 0;
}

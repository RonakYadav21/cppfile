#include <iostream>
using namespace std;
class sample
{
    int a, b;

public:
    void setdata();
    friend void mean(sample);
};
void sample::setdata()
{
    cout << "enter the vale of a and b ";
    cin >> a >> b;
}
void mean(sample obj)
{
    cout << "the average is " << (obj.a + obj.b) / 2;
}
int main()
{
    sample x;
    x.setdata();
    mean(x);
    return 0;
}
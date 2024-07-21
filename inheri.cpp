#include <iostream>
using namespace std;
class x
{
    int data1;

public:
    int data2;
    void set()
    {
        cout << "enter the value of data1 and data2";
        cin >> data1 >> data2;
    }
    int data1_display()
    {
        return data1;
    }
    
};
class y : public x
{
public:
    int data3;
    void process()
    {
        data3 = data1_display() + data2;
    }
    void show()
    {
        cout << "the value of data1 is" << data1_display() << endl;
        cout << "the value of data2 is " << data2 << endl;
        cout << "the value of data3 is" << data3 << endl;
    }
};
int main()
{
    y a;
    a.set();
    a.process();
    a.show();
    return 0;
}

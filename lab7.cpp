#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
    void set()
    {
        cout << "enter the length and width of the rectangle";
        cin >> length >> width;
    }
    void show()
    {
        cout << "the length is" << length << endl;
        cout << "the width is " << width << endl;
        // cout << "area of the  rect is " << area() << endl;
    }
    float area();
    int  samearea(rectangle);
    float perimeter();
};
float rectangle::area()
{
    return (length * width);
}
float rectangle ::perimeter()
{
    float p;
    p=2*(length+width);
    return p;
    // return (2 * (length + width));
}
int rectangle::samearea(rectangle a)
{
    if (area() == a.area())
    {
        cout << "area is same " << endl;
        // cout << "1";
        return 1;
        
    }
    else
    {
        cout << "area is not same" << endl;
        // cout << "0";
        return 0;
    }
}

int main()
{
    rectangle r1, r2 ;
    r1.set();
    r1.show();
    r2.set();
    r2.show();
    cout << "the perimeter of the 1 st  rect is  " << r1.perimeter() << endl;
    cout << "the perimeter of the 2 nd  rect is  " << r2.perimeter() << endl;

      cout<<"area is " <<  r1.samearea( r2);
    return 0;
}
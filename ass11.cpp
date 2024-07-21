#include <iostream>
using namespace std;
class time
{
    int hour;
    int min;

public:
    time()
    {
    }
    time(int h, int m)
    {
        hour = h;
        min = m;
    }
    void display()
    {
        cout << hour << "hour" << min << "min" << endl;
    }
    time operator++();
    time operator++(int);
    friend time operator--(time &);
    friend bool operator>(time &, time &);
};
time time ::operator++()
{
    time temp; // return types is class name
    temp.hour = ++hour;
    temp.min = ++min;
    return temp;
}

time time ::operator++(int d)
{
    hour++;
    min++;
    return *this;
}
time operator--(time &h)
{
    time temp;
    temp.hour = --h.hour;
    temp.min = --h.min; // friend function do not have this pointer
    return temp;
}
 bool operator>(time &t1, time &t2)
{      
    if (t1.hour > t2.hour && t1.min > t2.min)
    {
        return true;
        // cout << "true" << endl;
    }
    else if (t1.hour == t2.hour)
    {
        return true;
        // cout << "true";
    }
    else
    {
        return false;
        // cout << "flase";
    }
}

int main(){
    time a(4, 75);
    a.display();
    time b(6, 60);
    b.display();
    time c;
    cout << "after pre increment " << endl;
    c = ++a;
    c.display();
    cout << "after post  increment " << endl;
    time d = b++;
    d.display();
    cout << "after pre decrement " << endl;
    time f(5, 56);
    time e = --f;
    e.display();

       if( a>b){
      cout<<a<<"is greater than"<<b<<endl;
       }
       else
       { cout<<b<<"is greater than "<<a<<endl;
       }

    return 0;
}       //doubt

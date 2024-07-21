#include <iostream>
using namespace std;
class date
{
public:
    int dd;
    int mm;
    int yy;

    friend istream &operator>>(istream &, date &);
    friend operator<<(ostream &, date &);
    date operator++(){

    if (++dd > 31)
    {
        dd = 1;

        if (++mm > 12)
        {
            mm = 1;
            ++yy;
        }
    }
    return *this;
}
};
istream &operator>>(istream &din, date &a)
{

    cout << "enter date" << endl;
    din >> a.dd;
    cout << "enter month" << endl;
    din >> a.mm;
    cout << "enter year" << endl;
    din >> a.yy;
    return din;
}
operator<<(ostream &dout, date &a)
{
    dout << a.dd << " " << a.mm << " " << a.yy << endl;
}


int main()
{
    date d1;
    cin >> d1;
    ++d1;
    cout << d1;

    return 0;
}
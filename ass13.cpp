#include <iostream>
#include <string>
using namespace std;
class bank_account
{
protected:
    string name;
    int accno;
    float balance;

public:
    bank_account()
    {
        cout << "saving type" << endl;
        cout << "enter balance " << endl;
        cin >> balance;
    }
    void setdata(string n, int a)
    {
        name = n;
        accno = a;
    }
    void diposite();
    void withdraw();
    void display()
    {
        cout << "name of the bank depositor" << endl
             << name << endl;
        cout << "account no is " << accno << endl;
    }
};
void bank_account::diposite()
{
    float depos;
    cout << "enter the amount to deposite" << endl;
    cin >> depos;
    balance = balance + depos;
    cout << "total balance is" << balance << endl;
}
void bank_account::withdraw()
{
    float amount;
    cout << "enter the  amount you want to withdraw";
    cin >> amount;

    balance = balance - amount;
    cout << "remaining balance is " << balance;
}
int main()
{
    bank_account b;
    b.setdata("ronak yadav", 123456);
    b.display();
    b.diposite();
    b.withdraw();
    return 0;
}
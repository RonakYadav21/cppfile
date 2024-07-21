#include <iostream>
#include<math.h>
#include<string>
using namespace std;
class bank
{ protected:
    char name[20];
    int  acc_no;
    string acc;
    float bal;

public:
// bank(){
//     cout<<" saving type";
// }
void setdata()
    {
        cout << "enter the account holder's name " << endl;
        cin.getline(name,20);
        cout << "account no.:" << endl;
        cin >> acc_no;
    }
    bank(){
        bal=100;
    }
    void display()
    {
        cout << "name:" << name << endl;
        cout << "account no." << acc_no << endl;
        cout << "account type" << acc<<endl;
    }
};
class sav_acc:public bank{
    float  depos,with,withbal,intrest;
    float r,sum,t,intr;
    public:
    sav_acc(){}
    void show(){
        cout<"current bal is "<< bal<<endl
    }
    void deposite(){
        cout<<"enter hte bal you want to deposite";
        cin>> depos;
        sum=bal+depos;
        cout<<"balance in accout is "<<sum;
    }
    void interest(){
        float time;
        cout<<"rate will be 5%"<<endl;
        cout<<"enter time"<<endl;
        cin>>time;
        intr =sum*(pow(1+float(4.5)/100)),time;
        cout<<"interest is "<<intr;
    
    }

};
int main()
{
    sav_acc B;
    B.setdata();
    B.display();
    B.deposite();
    cout<<"compound interest is  "<<B.interest();

    return 0;
}

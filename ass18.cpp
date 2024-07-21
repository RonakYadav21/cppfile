#include<iostream>
#include<string>
using namespace std;
class EMP{
    string name,dep,add;
    long int con;
    int year,id;
    public:
    void setdata();
    void show();
    };
    void EMP:: setdata(){
        cout<<"enter the name of employee"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"enter the id of emplyee";
        cin>>id;
        cin.ignore();
        cout<<"enter the address of empplpoyee";
        cin.ignore();
        getline(cin,add);
        cout<<"enter the contact no  of empplpoyee";
        cin>>con;
        cout<<"enter the year of joining  of empplpoyee";
        cin>>year;
        cout<<"enter the department  of empplpoyee";
        cin.ignore();
        getline(cin,dep);
        cout<<endl;
    }
    void EMP ::show(){
        cout<<"name of the employee is "<<name <<endl;
        cout<<"id of the employee is "<<id<<endl;
        cout<<"add of the employee is "<<add<<endl;
        cout<<"con  of the employee is "<<con<<endl;
        cout<< "yera of joinig of the employee is "<<year<<endl;
        cout<<"dep of the employee is "<<dep<<endl;
    }
    int main (){
        EMP e;
        int a[10],size,i;
        cout<<"enter size";
        cin>>size;
        cout<<"enter detail of the employee"<<endl;
        for(i=0;i<size;i++){
            e.setdata();
            e.show();
        
            cout<<"enter details of second employee"<<i+1<<endl;
        }
        return 0;
    }
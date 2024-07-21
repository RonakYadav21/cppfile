#include<iostream>
using namespace std;
class student {
    int admno;
     char name[50];
    float eng,maths ,science;
    float total;
    public:
    void takedata(){
     cout<<"enter name";
      cin>>name;
      cout<<"admission";
      cin>>admno;
      cout<<"marks of eng,maths,science";
      cin>>eng>>maths>>science;

    }
    float ctotal(){
        total=eng+maths+science;
        return total;
    }
    showdata(){
        cout<<"name of the student is "<<name<<endl;
        cout<<"admisssion no. of the student is "<<admno<<endl;
        cout<<"english marks  of the student is "<<eng<<endl;
        cout<<"maths marks of the student is "<<maths <<endl;
        cout<<"science marks of the student is "<<science<<endl;
        // cout<<"total"<<ctotal();
    }

};
int main (){
 student s;
 s.takedata();
 s.showdata();
 cout<<"total marks is "<<s.ctotal();
 return 0;
}





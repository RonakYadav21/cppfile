#include<iostream>
using namespace std;
class student{
    int rollno;
    float m1, m2, m3;
    public:
    // void inputdata(int roll,float M1,float M2,float M3);
    // int  inputdata( int rollno,float m1,float m2,float m3)

    void inputdata();
    void displaydata (){
        cout<<"rollno is :"<<rollno<<endl;;   
        cout<<"marks are"<<m1 <<endl<<m2 <<m3 <<endl;

    }
};
// int  student::inputdata( int rollno,float m1,float m2,float m3)
void student :: inputdata()
{
    cout<<"enter the roll no,marks of the student"<<endl;
    cin>>rollno>>m1>>m2>>m3;
    // rollno=rollno;
    // m1=m1;
    // m2=m2;
    // m3=m3;
}
int main (){
    student s1,s2 ;
    // s1.inputdata(23,45,67,89);
    s1.inputdata();
    s1.displaydata();
    s2.inputdata();
    s2.displaydata();
    return 0;
}

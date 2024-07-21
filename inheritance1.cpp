#include <iostream>
using namespace std;
class student
{
// private:
protected:
    int rollno;

public:
    void set()
    {
        cout << "enter the rollno of the student";
        cin >> rollno;
    }
     int  show(){
        return rollno ;
     }
};
class exam : protected student
{
protected:
    float maths;
    float physics;

public:
    void set_marks()
    {
        set();  // here set function become protected 
        cout << "enter the marks of the maths and physics ";
        cin >> maths >> physics;
    }
    void display(){
        cout<<"rollno of the studetn is "<<rollno<<endl;      
        cout<<"total marks of the student is "<<maths+physics<<endl;
    }
};
int main()
{
    exam e;
    e.set_marks();
    e.display();
    return 0;
}

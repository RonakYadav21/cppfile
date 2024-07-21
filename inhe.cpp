#include <iostream>
using namespace std;
class student
{
// private:
// protected:
    int rollno;

public:
    void set()
    {
        cout << "enter the rollno of the student";
        cin >> rollno;
    }
     void  showdata(){
        // return rollno ;
        cout<<"roll no is "<<rollno;
     }
};
class exam :public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks()
    {
        // set();  // here set function become private 
        cout << "enter the marks of the maths and physics ";
        cin >> maths >> physics;
    }
    void display(){
        // cout<<"rollno of the studetn is "<<show()<<endl;   // rollno become private     
        cout<<"total marks of the student is "<<maths+physics<<endl;
    }
};
    class result  :public exam{
        int percentage;
        public:
        void show(){
            cout<<"percentage is "<<(maths+physics)/2;

        }
    };

int main()
{
    result e;
    e.set(); 
    e.showdata();   //  cannot be used here as the function is  private
    e.set_marks();
    e.display();
    e.show();
    return 0;
}
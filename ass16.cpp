#include<iostream>
using namespace std;
class shape{
    public:
    double x,y;
    // public:
    getdata(double a,double b){
        x=a;
        y=b;

    }
        virtual void display_area(){}
        
    
};
class rectangle:public shape{
    public:
    void display_area(){
    cout<<"area of the rectangle is "<<x*y<<endl;
    }
};
class triangle :public shape{
    public:
    void display_area(){
        cout<<"area of triangle "<<1/2*(x*y)<<endl;
    }

};
int main (){
shape *s;
rectangle r;
triangle t;
s=& r;
// s->x=5;
// s->y=8;
// s->display_area();
// s=&t;
// s->x=3;
// s->y=1;
s->getdata(4,8);
s->display_area();
return 0;
}
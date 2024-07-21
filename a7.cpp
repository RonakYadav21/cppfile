#include<iostream>
using namespace std;
class rectangle{
    float l,w,a;
    public:
    void setlenght(){
        cout<<"enter the length of the rectangle"<<endl;
        cin>>l;

    }
    void setwidth(){
        cout<<"enter the widht of the rectangle"<<endl;
        cin>>w;
    }
    float perimeter();
    float area();
    int samearea();
    void show();
};
    float rectangle :: perimeter(){
        float p;
        p=2*(l+w);
        return p;
    }
   float rectangle:: area(){
    // float a;
        return (l*w);
        // return a;
    }
    int  samearea(rectangle a,rectangle b){
        if(a.area()==b.area()) {
            return 1;
            // cout<<"1";
        }
        else{
            return 0;
        }
    }
     void rectangle:: show(){
        cout<<"lenght of the rectangle is :"<<l<<endl;
        cout<<"width of the rectangle is :"<<w<<endl;
        cout<<"perimeter of the rectangle is :"<<perimeter()<<endl;
        // cout<<"area of the rectangle is :"<<area();
    }
    

int main(){
    rectangle r1,r2;
    r1.setlenght();
    r1.setwidth();
    r1.show();
    r2.setlenght();
    r2.setwidth();
    r2.show();
    cout<<"area "<< r1.area()<<endl;
    cout<<"area" <<r2.area()<<endl;
    cout<<"is area is same  "<<samearea(r1,r2);
    return 0;
}
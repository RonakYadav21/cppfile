#include<iostream>
using namespace std;
class A {
    public:
     void func(int x){
        cout<<"value of x is:"<<x<<endl;
     }
     void func(double y){
        cout<<"value of y is:"<<y<<endl;
        
     }
     double func(int x,double y){
        // cout<<"value of x and y is:"<<x<<","<<y<<endl;
            return (x+y);
        
     }
};
int main(){
    A a;
    a.func(7);
    a.func(8.8);
    // a.func(4,8.8);
    cout<<"sum is "<<a.func(4,8.8);
    return 0;

}

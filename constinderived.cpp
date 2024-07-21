#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    A(int i){
        x=i;
        cout<<"x is intialised"<<endl;
    }
    void display(){
        cout<<" the value of x is:"<<x<<endl;
    }

};
class c{
    protected:
    int z;
    public:
    c(int k){
        z=k;
        cout<<"z is initialized"<<endl;
    }
};
class B:public A,public c{
    int y;
    public:
    B(int i,int k,int j) :A(i),c(k){      
      y=j;
     cout<<"y is intialised"<<endl;
     }
    
    void print(){
        cout<<"the value of y is:" <<y<<endl;
        cout<<"the value of z is:" <<z<<endl;
    }

};
int main(){

    B b(5 ,8,6);
    b.display();
    b.print();
    return 0;
}
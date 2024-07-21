#include<iostream>
using namespace std;
class sum{
    int a;
    int b;
    public:
    void setdata();
    void displaydata(){
        cout<<"the sum is"<<a+b;
    }

};
void sum :: setdata(){
    cout<<"enter  the value of a and b";
    cin>>a>>b;
}


int main(){
    sum s1,s2;
    s1.setdata();
    s2.setdata();
    s1.displaydata();
    s2.displaydata();
    return 0;
}
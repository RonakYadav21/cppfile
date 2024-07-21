#include<iostream>
using namespace std;
class number{
    int a;
    public:
    // number (){}  
    number(int num){
        a=num ;
    } 
        number(number &num){
        a=num.a ;
        cout<<"copy construct is called"<<endl;
        } 
    void display(){
        cout<<"the value of a  for this  objec  is "<<a<<endl;
}
    
};
int main(){
    number x(45) ,y(67);
    x.display();
    y.display();
    number z(x);
    z.display();
    number z1(y);      // for default constructor by compipler is provided we dont have copy constructor
    z1.display();
    number z2=x;       // copy con.. can also be called in this ways 
    z2.display();
    return 0;
}


#include<iostream >
using namespace std;
class y;
class x{
    int a;
    public:
    int setdata(int value){
        a=value;
    }
     friend void sum(x,y);
} ;
class y{
    int b;
    public:
    int setdata(int value){
        b=value;
    }   
  friend void sum(x,y);

};
void sum(x o1,y o2){
    cout<<"the sum of the value of x and y class is "<<o1.a+o2.b;
    
}
int main(){
    x c;
    c.setdata(4);
    y d;
    d.setdata(9);
    sum(c,d);
    return 0;

}
#include<iostream>
using namespace std;
int main (){
    float a=567.00;
    cout.width(10);
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);  // 2 argument 
    cout.setf(ios::oct,ios::basefield);  // 2 argument 
    cout.setf(ios::showpos);   //1 argument
    cout.setf(ios::showpoint);
    cout<<a;
    return 0;

}
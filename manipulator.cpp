#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int  a = 3144;
    cout<<setw(10)<<setiosflags(ios::showpos)<<setfill('*')<<a;
    // cout<<setiosflags(ios::left,ios::adjustfield)<<a;
    return 0;
}



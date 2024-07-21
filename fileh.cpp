#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream out("samle.txt" ,ios::out);
    int code;
    cout<<"enter the code"<<endl;
    cin>>code;
    out<<code;

 return 0;

}
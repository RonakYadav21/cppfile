#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream in("samplex2.txt");
    int cost;
    int code;
    cout<<"enter code and cost"<<endl;
    in>>code>>cost;
    // out<<code<<cost;
    in.close();
    return 0;
}
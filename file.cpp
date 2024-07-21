#include<iostream>
#include<fstream>     //classses which are useful in file are defined in fstream 
using namespace std;
int main (){
    string st="hellow everyone";
    string st2;
    ofstream out("sample.txt");     //write operation 
    out<<st;
    // write(out,st);
    

    ifstream in("sample2.txt");     //read operation 
    getline(in,st2);
    cout<<st2;
    
    return 0;
}
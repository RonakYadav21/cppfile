#include<iostream>
using namespace std;
int i;
template<class T,int size>
class array{
     T a[size];
     public:
     array(){}
     void input(){
        for(i=0;i<size;i++){
            cin>>a[i];
        }
     }
     void output(){
        for(i=0;i<size;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
     }

};
int main (){
    array<int,5>a;
    a.input();
    a.output();
    return 0;
}
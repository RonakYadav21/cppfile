#include<iostream>
using namespace std;
class myclass {
    int value;
    public:
    void setval(){
      cout<<"enter object";
      cin>>value;  
    }
    int getval(){
        return value;
    }
};
int main(){
    int n=5;
    int i;
    myclass array[n];
    for(i=0;i<n;i++){
        array[i].setval();
    }
    cout<<"objectscof an array"<<endl;
    for(i=0;i<n;i++){
        cout<<array[i].getval()<<endl;
    }
    return 0;

}
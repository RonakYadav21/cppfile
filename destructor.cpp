#include<iostream>
using namespace std;
    int   count=0;
class num {
    // int   count=0;
    public:
     num(){
        count++;
        cout<<"the constructor is called for "<<count <<endl;
     }
     ~num(){
        cout<<"the  destructor is called"<<count <<endl;
        count--;
     }

};
int main(){
    cout<<"we are main"<<endl;
    cout<<"we are creating frist object"<<endl;
    num n1;
    {
        cout<<"entering the block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2, n3;
        {
            cout<<"exiting this block"<<endl;
        }
        cout<<"back to main"<<endl;
    }
    
    return 0;
}
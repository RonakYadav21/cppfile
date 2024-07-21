#include<iostream>
using namespace std ;
class sum {
    int a ;
    int b ;
    public:
       sum(){
    }
    sum(int x){          // construct overloading 
        a=x;
        b=1;
        
    }
    sum (int z,int k){
        a=z;
        b=k;
    }
    void displaydata (){
        cout<<"the sum of the number is "<<a+b<<endl;  
    }

};
int main (){
    // sum s1;
    // s1.displaydata ();
    sum s2(10);
    s2.displaydata();
     sum s1(3,7);
     s1.displaydata();
    return 0;
}


//doubt 
#include<iostream>
using namespace std;
void division (double a, double b){
    try{
        if (a==0||b==0)
         throw(a,b);
         if(b!=0){
            cout<<"division "<<a/b;
         }
            else 
            throw b;
         } 
    catch ( double d){
        cout<<"exception is caught"<<endl;
        // throw;
    }
    catch(char c){
        cout<<"invalid data type "<<endl;
    }
}
int main(){

        division(7,0);
        division (5,10);
return 0;
}
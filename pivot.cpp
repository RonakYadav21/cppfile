#include<iostream>
using namespace std;
int main(){
    // int n ,m,i, max=0;
    // // cout<<"enter n no."<<endl;
    // // cin>>n;
    // cout<<"enter the no of element"<<endl;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     cout<<"enter current no.";
    //     cin>>m;
    //     if(m>max){
    //      max=m;
    //     }
    // }
    // cout<<"max:"<<max;
    // bool a=true;
    // cout<<a;     it will give 1 because iin c++ rhw bool gives 1 for true and  for  false
    // int a;
    // char d;
    // double e;
    // cin>>a>>d>>e;  
    // cout<<a<<d<<e;    ans will be value of a,d,e without any space
//    char ch=34;
    // cout<<C;
    // char c='D'; 
    // cout<<('D'+1);    /*ans is 69 bc wahen a char is added with int the ans will be int*/



    // find either a no is prime or not
    int n, i=2;
    cout<<"enter a no."<<endl;
    cin>>n;
    for(i=2;i<=n;i++){
        if(n%i==0){
            cout<<"no is not a prime no."<<endl;
            break;
        }
        
        else {
            cout<<"it is a prime no."<<endl;  
         }
         break;
    }
    // double a=10/4;
    // int b=6/4;
    // double c= a+b;
    // cout<<"c"<<c;
    // char ch='a';
    // ch=ch+a;
    // cout<<"ch"<<ch;     /*ch=k    because we are assinging int value to char*/
    // int b=55;



    // double a=55.5;
//    a= a%10.0;
//    b=b%10;
//    cout<<a<<" "<<b;


int a=5;
int b=7;
cout<<(a>b);
    return 0;
}
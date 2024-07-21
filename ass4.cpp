#include<iostream>
using namespace std;
int main (){

    int choice;
    int i,j;
     int a[2][2],b[2][2],c[2][2],d[2][2],t[i][j],p[i][j];
         cout<<"enter the elements of the frist matrix"<<endl;
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        cin>>a[i][j];

        cout<<"enter the elements of the second matrix"<<endl;
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        cin>>b[i][j];

        cout<<" frist matrix are"<<endl;
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        cout<<a[i][j]<<"\t";
        cout<<endl;
        cout<<"second matrix is"<<endl;
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        cout<<b[i][j]<<"\t";
        cout<<endl;

    cout<<"menu"<<endl;
    cout<<"1. addtion\n 2.multiplication\n 3.tranpose"<<endl; 
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)   
        c[i][j]=a[i][j]+b[i][j];   
         for(i=0;i<2;i++)
        for(j=0;j<2;j++)   
          cout<<c[i][j]<<"\t";
          cout<<endl;
    break;
    case 2:
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        d[i][j]=a[i][j]*b[i][j];
         for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        cout<<d[i][j]<<"\t";
          cout<<endl;
          break;
     case 3:
          for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        t[i][j]=a[j][i];
         for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        cout<<t[i][j]<<"\t";
        cout<<endl;

        //   for(i=0;i<2;i++)
        // for(j=0;j<2;j++)
        // p[i][j]=b[j][i];
        //  for(i=0;i<2;i++)
        // for(j=0;j<2;j++)
        // cout<<p[i][j]<<"\t";
        // cout<<endl;

default:
cout<<"enter valid operation";

    }
    return 0;
}
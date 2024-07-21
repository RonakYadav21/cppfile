#include<iostream>
using namespace std;
class array{
    int *arr;
    int size;
    public:
    array(){}
    array(int s){
        size=s;
        arr=new int[size];
    }
    array(array & a){
        size=a.size;
        arr=a.arr[size];
        for(i=0;i<size<i++)
        arr[i]=a.arr[i];
    }
   ~ array(){
        delete []arr;
    }
    int & operator[](int index){
        return arr[index];
    }
    ostream & operator<<(ostream & din,array & a){
        for(i=0;i<size;i++)
        din<<arr[i]<<" ";
        return din;
    }
   istream & operator>>(istream & dout,array & a){
        for(i=0;i<size;i++)
        dout>>arr[i]>>" ";
        return dout;
    }
};
int main(){
    array a[5];
    cin>>a;
    cout<<a;<<endl;
    return 0;

}

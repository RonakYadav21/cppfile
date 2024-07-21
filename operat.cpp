#include<iostream>
using namespace std;
class shop{
    int id;
    int cost;
    public:
    friend    operator >>(istream &,shop &);
    friend  operator <<(ostream &,shop &);


};
 operator >>( istream & din , shop  & a ){
    cout<<"enter id "<<endl;
    din>>a.id;
    cout<<"enter cost "<<endl;
    din>>a.cost;
}
 operator <<( ostream & dout , shop & a ){
    dout<<"the id is "<<a.id<<endl;
    dout<<"cost is "<<a.cost;
}

int main(){
    shop s;
    cin>>s;    //operator>>(cin,s)
    cout<<s;    //operator<<(cout,s)
    return 0;
}
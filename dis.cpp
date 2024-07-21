#include <iostream>
using namespace std;
class A
{
private:
    float  km;
    float m;

public:
    void setdata();
    void getdata()
    {
        cout << "the total distance is "<< endl;
        cout << km << "and " << m;
    }
    friend A sum(A , A );
};
void A :: setdata()
{
    
    cout << "enter the distance between two cities " << endl;
    cin>>km>>m;
    
}
  A sum(A o1,A o2)
{
    A r;
    r.km=o1.km +o2.km;   
     r.m=o1.m + o2.m;
     {
        km=+m/1000;
        m=+m%1000;
    // if(m>1000){
    //     km=km+m/1000;
    //     m=m+m%1000;    
    // }
    // else if (m==1000)
    // {
    //     km=km+1;
    //      m=m+0;
    // }
     }
   return r;
     
}
int main()
{
 A d1,d2,d3;
    d1.setdata();
    d2.setdata();
    d1.getdata();
    d2.getdata();
    d3=sum(d1,d2);
    d3.getdata();

    return 0;
}  ///doubt

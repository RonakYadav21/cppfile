#include<iostream>
using namespace std;
class shop{
    private :
      int itemid[3];
      int price[3];
      // int counter;
      public:
      // void counter(){counter=0};
      void setdata();
       void getdata()
      {
        for(int i=0;i<3;i++)
        cout<<"the id of the item is "<<itemid[i]<<"and the price of the item is "<<price[i]<<endl;
      }
};
void shop :: setdata()
{
    for(int i=0;i<3;i++){
       cout<<"enter the item id and price of the item "<<endl;
       cin>>itemid[i]>>price[i];
    }
    
    }

int main (){
    shop dukan;
    dukan.setdata();
    // dukan.setdata();
    // dukan.setdata();
    dukan.getdata();
    return 0;
}

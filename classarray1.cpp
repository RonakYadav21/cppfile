#include <iostream>
using namespace std;
class shop
{
private:
  int itemid[10];
  int price[10];
  int counter;

public:
  void count() { counter = 0; }
  void setdata();
  void getdata()
  {
    for (int i = 0; i <= counter; i++)
    {
      cout << "the id of the item is " << itemid[i] << endl;
      cout << "the price of the item  is " << price[i] << endl;
    }
  }
};
void shop ::setdata()
{

  for (int i = 0; i <= counter; i++ )
  {
    cout << "enter the item id  of the item "  << counter+1<<endl;
    cin >> itemid[i];
  }
  for (int i = 0; i <= counter; i++)
  {
    cout << "enter the item prize of the item ";
    cin >> price[i];
  }
  counter++;
}

int main()
{
  shop dukan;
  dukan.count();
  dukan.setdata();
  // dukan.setdata();
  // dukan.setdata();
  dukan.getdata();
  return 0;
}

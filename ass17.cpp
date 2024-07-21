#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class item
{
  string name;
  int code;
  double cost;

public:
  void setdata(string n, int c, double cst)
  {
    name = n;
    code = c;
    cost = cst;
  }
  void show()
  {
    cout << setw(15) << setiosflags(ios::left) << setfill('_') << name;
    cout << setw(8) << setiosflags(ios::left) << setfill('_') << code;
    cout << setw(10) << setfill('_') << setprecision(2) << setiosflags(ios::showpoint) << cost;
  }
};
int main()
{
  item a[10];
  int i, size, code, cost;
  string n;
  cout << "enter size";
  cin >> size;
  // a[1].setdata("1 turbo c++",1001,250.95);
  // a[2].setdata("2.c primer",905,97.5);
  // a[3].setdata("3. coding c++",1002,300.234);
  for (int i = 0; i < size; i++)
  {
    cout << "enter code,cost";
    cin >> code >> cost;
    cout << "enter name";
    cin.ignore();
    getline(cin, n);
    a[i].setdata(n, code, cost);
    cout << endl;
  }

  cout << setw(15) << setiosflags(ios::left) << "name" << setw(8) << setiosflags(ios::left) << "code" << setw(10) << "cost" << endl;
  ;
  for (int i = 0; i < 3; i++)
  {
    a[i].show();
    cout << endl;
  }
  return 0;
}

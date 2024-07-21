#include <iostream>
using namespace std;
class product
{
private:
    int code;
    int cost;
public:
    void setdata(int cd,int cst);
    void displaydata()
    {
        cout << "the code of the item is " << code << endl;
        cout << "the cost of the item is " << cost << endl;
    }
};
void product::setdata(int cd,int cst)
{

    // cout << "enter the value of the id and cost" << endl;
    // cin >> code >> cost;
    cost=cst;
    code=cd;
}

int main()
{
    product product;
    product.setdata(45,67);
    product.displaydata();
    return 0;
}
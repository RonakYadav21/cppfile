#include <iostream>
using namespace std;
class car
{
    string model;
    string brand;
    int year;
    public:
    
    car(string m, string b, int y)
    {
        model = m;
        brand = b;
        year = y;
    }
        void show(){
            cout << "c year  is " << year << endl;
            cout << "c model is " << model << endl;
            cout << "c brand is " << brand<< endl;
        }


};
 class car1:public car{
    double cost;
    public:
    car1(double cst ,string m, string b ,int y):car(m,b,y){
        cost=cst;
    }
    void display(){
        // void show();
            // cout << "c year  is " << year << endl;
            cout << "c cost  is " << cost << endl;
            // cout << "c model is " << model << endl;
            // cout << "c brand is " << brand<< endl;
    }
        
    
 };
int main()
{
    car1 c(500000.0,"x3r4","bmw",2022);
    c.show();
    c.display();

    return 0;
}
#include<iostream>
using  namespace std;
class flight {
    int flight_no;
    char distination[50] ;
    float distance;
    float fuel;
    public:
    void  feedinfo(){
        cout<<"enter the flight no "<<endl;
        cin>>flight_no;
        cout<<"enter the destination  "<<endl;
        cin.ignore();
       cin. getline(distination,50);
        cout<<"enter the distance "<<endl;
        cin>>distance;
    }
    float  calfuel(){
        if (distance<=1000)
            return 500;
        }
        else if (distance >1000 && distance <=2000){
             return 1100;
        }
        else if (distance >2000){
            
            return 2200;
        }  

    }
     void showinfo(){
        cout<<"flighht no is "<<flight_no <<endl;
        cout<<"distination  is "<<distination <<endl;
        cout<<"distance is "<<distance<<endl;
        cout<<"flue  is "<<calfuel()<<endl;

    }
};
int main (){
    flight f;
    f.feedinfo();
    //  cout<<"fuel is "<<f.calfuel()<<endl;
    f.showinfo();
    return 0;
}
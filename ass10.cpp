#include<iostream>
using namespace std;
class distance{
    int meters;
    int centimeters;
    public:
    distance(){}
    distance(int m.int c){
        meters =m;
        centimeters=c;
    }
    distance operator +(distance &d ){
      distance result;
      result.meters=meters+d.meters;
      result.centimeters=centimeters+d.centimeters;
      if(centimeters>=100){
         meters+=centimeters/100;
        centimeters=centimeters%100;

      }
}
friend distance operator -(distance & d1,distance & d2);
friend  istream &operator >>(istream & din,distance & d1);
friend ostream & operator <<(ostream & dout,distance & d1);
};
 istream & operator >>(istream & din,distance & d1){
    din>>d1.meters>>"and"<<d1.centimeters;
 }
  ostream & operator <<(ostream & dout,distance & d1){
    dout<<d1.meters<<"and"<<d1.centimeters;
  }
    distance operator -(distance & d1,distance & d2 ){
      distance result;
      int diff=(d1.meters*100+d1.centimeters)-(d2.meters*100+d2.centimeters);
    if(diff<0){
       diff=-diff;    
      }
      result.meters=diff/100;
      result.centimeter=diff%100;
      return result;
      }
      int main(){
        distance a,b,c;
        int choice;
        do
        {
        cout<<"1 enter two distance\n 2 add two distance\n 3substract two distance"<<endl; 
        cout<<"enter choice";
        cin>>choice;
        switch(choice){
          case 1:
          cout<<"enter  frist distance"<<endl;
          cin>>a;      
            cout<<"enter  sec distance"<<endl;
          cin>>b;
        break;
        case 2:
        c=a+b;
        cout<<"result"<<c;
        break;
        case 3:
        a-b;
        cout<<"result"<<c;
        break;
        default:
        cout<<"enter valid choice";
        }
        }
        while(!=4);
          return 0;
      }
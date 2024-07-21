#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class invertory{
    int price ;
    int no;
    public:
    void readdata();
    void writedata();

};
void invertory :: readdata(){
    cout<<"enter price and no";
    cin>>price>>no;

}
void invertory :: writedata(){
cout<<setw(5)<<setiosflags(ios::left)<<price<<endl;
// cout<<setw(3)<<price;
cout<<setw(5)<<setiosflags(ios::right)<<no;
// cout<<setw(3)<<no;

}
int main (){
    int i;
    invertory item[3];
    ifstream file;
       file.open("stack");
    cout<<"enter details";
    for( i=1;i<=3;i++){
    item[i].readdata();
    file.write((char*)&item[i],sizeof(item[i]));
    }
file.seekg(0);
    
    cout<<"output"<<endl;
    for(i=1;i<=3;i++){
        item[i].writedata();
        file.read((char*)&item[i],sizeof(item[i]));
        // item[i].writedata();
    }
    file.close();

    return 0;
}



//doubt
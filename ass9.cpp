#include<iostream>
using namespace std;
int i;
class mark_sheet{
    int enroll;
    string name;
    int rollno;
    int theorymarks [5];
    int pmarks [5];
    char grade;
    int generate_rollno(){
        static int count=1;
        return count ++;
    }
        public:
    
    mark_sheet(){
        rollno=generate_rollno();
    }
        
      friend istream & operator >> (istream &,mark_sheet &);
      friend ostream & operator << (ostream &,mark_sheet &);
     void calgrade();  

};
 
 istream & operator>>(istream & din,mark_sheet & a){
 cout<<"enter enroll of the student"<<endl;
 din>>a.enroll ;
 cout<<"enter name of the student"<<endl;
 din>>a.name;
 cout<<"theory marks"<<endl;
 for(i=0;i<5;i++){
    din>>a.theorymarks[i];
 }
  cout<<"pratical marks"<<endl;
 for(i=0;i<5;i++){
    din>>a.pmarks[i];
}
  }
  ostream & operator<<(ostream & out,mark_sheet & a){
 out<<"enroll:"<<a.enroll <<endl;
 out<<"name:"<<a.name<<endl;
 out<<"rollno: "<<a.rollno<<endl;
 cout<<"theory marks"<<endl;
 for(i=0;i<5;i++){
    out<<"theory marks are:"<<a.theorymarks[i]<<" ";
    cout<<endl;
 }
  cout<<"pratical marks:"<<endl;
 for(i=0;i<5;i++){
    out<<"pratical marks are:"<<a.pmarks[i]<<" ";
 
 cout<<endl;
 }
  }
 void mark_sheet:: calgrade(){
    int totalmarks;
for(i=0;i<5;i++){
     totalmarks=theorymarks[i]+pmarks[i];
     cout<<"total marks"<<totalmarks<<endl;
    if(totalmarks>=90){
    cout<<"grade=A"<<endl;
    }
        else if (totalmarks>=80){
        cout<<"grade=B"<<endl;
        }
        else{
            cout<<"fail"<<endl;
        }
    }
   
  }
  

int main (){
    mark_sheet m1;
    cin>>m1;
    cout<<m1;
    m1.calgrade();
    return 0;
}
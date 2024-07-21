// #include<iostream>
// // #define null 0
// using namespace std ;
// struct node{
// 	int data;
// 	node*link;
// };
// class stacklist{
// 	node*top;
// 	public:
// 	stacklist(){
// 		top=NULL;
// 	}
// 	void add( int num);
// 	void display();
	
// };

// void stacklist::add(int num)
// {
// 	node*temp;
// 	temp=new node ;
// 	temp->data=num;
// 	temp->link=top;
// 	top=temp;
// }

// void stacklist::display()
// {
// 	cout<<"the element are :"<<endl;
//      for(node*temp=top;temp!=NULL;temp=temp->link){
// 		cout<<temp->data<<"->";
// 	}
// }
// int main()
// {
// 	stacklist sl;
// 	sl.add(5);
// 	// sl.display();
// 	sl.add(8);
// 	sl.add(18);
// 	sl.add(83);
// 	sl.add(85);
// 	sl.display();
// 	return 0 ;
// }
#include<iostream>
using namespace std ;
struct node{
	int data;
	node*link;
};
class stacklist{
  node*top;
	public:
	stacklist(){
		top=NULL;
	}
	void add( int num);
	void display();
	
};

void stacklist::add(int num)
{
	node*temp;
	temp=new node ;
	temp->data=num;
	temp->link=top;
	top=temp;
}

void stacklist::display()
{
	cout<<"the element are :"<<endl;
     for(node*temp=top;temp!=NULL;temp=temp->link){
		cout<<temp->data<<"->";
	}
    cout<<"null";
}
int main()
{
	stacklist sl;
	sl.add(5);
//	sl.display();
	sl.add(8);
	sl.display();
	return 0;
}

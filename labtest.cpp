#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
class linkedlist
{
public:
    node *start;
    linkedlist()
    {
        start = NULL;
    }
    void insertatbeg(int data);
    void insertatend(int data);
    void display();
    void reverse();
    void del(int);
    void interchange();
    void change();
};
void linkedlist::insertatbeg(int data)
{
    node *temp = new node();
    temp->data = data;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->link = start;
        start = temp;
    }
}
void linkedlist::display()
{
    node *t = start;
    while (t != NULL)
    {
        cout << t->data <<" ";
        t = t->link;
    }
}
void linkedlist::reverse()
{
    node *prev = NULL;
    node *next;
    node *current = start;
    while (current!= NULL)
    {
        next = current->link;
        current->link= prev;
         prev=current;
         current=next;
    }
    start = prev;
}
void linkedlist::insertatend(int data){
    node*temp=new node;
    temp->data=data;
    node*t=start;
    while(t->link!=NULL){
    t=t->link;
    }
    t->link=temp;
    temp->link=NULL;
}
void linkedlist::del(int num){
    node*t=start;
    node*old;
    int found=0;
    while(t!=NULL){
        if(t->data==num){
        if(t==start){
            start=start->link;
            }
            else{
                old->link=t->link;
            }
            delete t;
            found=1;
            break;
    }
    else{
    old=t;
    t=t->link;
}
}
if(found==0){
    cout<<"element not exist"<<endl;
}
else{
    cout<<"element deleted "<<endl;
}


}
void linkedlist::interchange(){
    int temp;
    node*t=start;
    while(t->link!=NULL){
    t=t->link;
    }
    temp=t->data;
    t->data=start->data;
    start->data=temp;
}
void  linkedlist::change(){
    node*old;
    node*t=start;
    while(t->link!=NULL){
        old=t;
        t=t->link;
    }
    t->link=start->link;
    old->link=start;
    old->link->link=NULL;
    start=t;
}
int main()
{
    linkedlist l;
    l.insertatbeg(3);
    l.insertatbeg(4);
    l.insertatbeg(2);
    l.insertatbeg(13);
    l.display();
    cout<<endl;
    l.insertatend(8);
    l.display();
    l.reverse();
    cout<<endl;
    l.display();
    cout<<endl;
    l.del(13);
    l.display();
    cout<<endl;
    l.interchange();
    l.display();
    cout<<endl;
    l.change();
    l.display();

    return 0;
}
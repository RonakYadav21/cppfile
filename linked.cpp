#include <iostream>
using namespace std;
struct node
{
public:
    int data;
    node *next;      /*node is used because it is a datatype*/
    node*prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev=NULL;
    }
};
class linkedlist
{
    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }
    void insertathead(int d)
    {  
        node*temp=new node ;/* new will request for a memoryand then returns the address of the newly allocated memory to the temp */
        node *temp = new node(d);    /* constructor is called constructor will allocate temp name space in memory*/
        temp->next = head;   /*next it accessible by class also because next is public and public members can accesed by other class also */
          temp->prev=NULL;
        head = temp;
    }
    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    // void delbeg();
    // void delbetween(int index);
    void del(int num);
    int count();
    // void delend();
    // void reverse();
    // };
    // void linkedlist::insesrtathead(int d){
    //     node*temp= new node(d);
    //     temp->next=head;
    //     head=temp;
    // }
};
// void linkedlist::delbeg()
// {
    // node *t;
    // t = head;
    // head = head->next;
    // delete (t);
// }
// void linkedlist::delbetween(int index)
// {
    // int found =0;
//     node *t;
//     t = head;
//     if(head==NULL){
//         cout<<"element not exist";

//     }
//     else{
//     for (int i = 0; i <= index - 1; i++)
//     {
//         t = t->next;
//         if(t==NULL){
//             cout<<"INDEX NOT FOUND";
//         }
//     }
//     node *temp = t->next;
//     t->next = temp->next;
//     delete (temp);
//     found=1;
//     // break;
// }


// }
// delete between by given num
void linkedlist::del(int num)
{
    int found=0;
    node *p, *q;
    p = head;
    // q=p;
    //   q=NULL;
    
    while (p!=NULL){
    if(p->data==num){
      if(p==head){
        head=head->next;
        head->next->prev=NULL;
      }
      else{
        q->next=p->next;
        p->next->prev=p->prev;

      }
      delete (p);
      found=1;
      break;
    }
    else{
    q=p;
    p=p->next;
    }

    }
    if(found==0){
        cout<<"element not  found"<<endl;
    }
    else{
        cout<<"element deleted"<<endl;
    }
// 
}
int linkedlist::count(){
    int count=0;
    node*t=head;
    while(t!=NULL){
        count++;
        t=t->next;
    }
    return count;
}
// void linkedlist::delend(){
//    node*t=head;
//    node*p;
//    while(t!=NULL){
//    if(t==NULL){
//     p->next=NULL;
//     delete(t);
//    }
//    else{
//     p=t;
//     t=t->next;
//    }
// }
//    }

// void linkedlist::reverse(){
//     node*t=head;
//     node*pre=NULL;
//     node*n=NULL;
// while(t!=NULL){
//     n=t->next;
//     t->next=pre;
//     pre=t;
//     t=n;
// }
// head=pre;
// }


int main()
{
    linkedlist a;
    a.insertathead(5);
    a.insertathead(6);
    a.insertathead(4);
    a.insertathead(53);
    a.insertathead(56);
    a.insertathead(1);
    // a.insertathead(2);
    // a.insertathead(8);
    a.print();
    // a.delbeg();
    // a.print();
    a.delb(4);
    a.print();
    // a.delbetween(6);
    // a.print();
    // a.delbet(5);
    // cout<<a.count()<<endl;
    // a.delend();
    // a.print();
    // a.reverse();
    // a.print();
    // 
    return 0;
}
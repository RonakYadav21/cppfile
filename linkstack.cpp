// link list not is implemented as an array
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class stacks
{
public:
    node *top;
    stacks()
    {
        top = NULL;
    }
    void push(int element)
    {
        node *temp = new node(element);
        if (!temp)
        {
            cout << "stack is full";
        }
        else
        {
            temp->data = element;
            temp->next = top;
            top = temp;
        }
    }
    void display()
    {
        node *temp;
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    void isfull()
    {
        node *temp;
        if (!temp)      /*unable to creat a node*/
        {
            cout << "stack is full";
        }
    }
    void isempty()
    {
        if (top == NULL)
        {
            cout << "stack is empty";
            // return true;
        }
    }
    void pop()
    {
        node *temp;    
        // temp=top;
        if (top == NULL)   
        {
            cout << "stack underflow";    
            exit(1);
        }
        else
        {
            temp = top;
            top = top->next;
            free(temp);
        }
    }
    int peek()
    {
        return top->data;
    }
};
int main()
{
    stacks s;
    // s.push(4);
    // s.push(5);
    // s.push(4);
    // s.push(1);
    // s.push(34);
    // s.push(42);
    // s.push(46);
    // s.push(46);
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // cout<<"peek element is:"<<s.peek()<<endl;
    // s.pop();
    // s.pop();
    s.display();
    s.isempty();
    s.isfull();
    return 0;
}
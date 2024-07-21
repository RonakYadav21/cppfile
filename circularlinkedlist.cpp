// circularlinkedlist
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
class clinkedlist
{
    node *start;

public:
    clinkedlist()
    {
        start = NULL;
    }

    void addathead(int value);
    void addafter(int index, int value);
    void addatend(int data);
    void display();
    void del(int);
};
void clinkedlist::addathead(int value)
{
    node *temp = new node();
    temp->data = value;
    temp->next = start;

    if (start != NULL)
    {
        node *t = start->next;
        while (t->next != start)
        {
            t = t->next;
        }
        t->next = temp;
        temp->prev = t;
        start = temp;
    }
    else
    {
        temp->next = temp;
        start = temp;
    }
}
void clinkedlist::display()
{
    node *t = start;
    if (start != NULL)
    {
        do
        {
            cout << t->data << " ";
            t = t->next;
        } while (t != start);
    }

    cout << endl;
}
void clinkedlist::addafter(int index, int value)
{
    node *temp = new node();
    temp->data = value;
    node *t = start;
    for (int i = 0; i < index; i++)
        t = t->next;
    if (t == NULL)
    {
        cout << "ther are less element ";
    }
    else
    {
        temp->prev = t->next->prev;
        temp->next = t->next;
        t->next = temp;
    }
}
void clinkedlist::addatend(int data)
{
    node *temp = new node();
    node *t = start->next;
    temp->data = data;
    while (t->next != start)
    {
        t = t->next;
    }
    t->next->prev = temp;
    temp->next = t->next;
    temp->prev = t;
    t->next = temp;
}
void clinkedlist::del(int num)
{
    int found = 0;
    node *t = start;
    node *p;
    node *old;
    if (start == NULL)
        cout << "no element";
    while (t->next != start)
    {
        if (t->data == num)
        {
            if (t == start)
            {
                p = start;
                while (p->next != start)
                {
                    p = p->next;
                }
                p->next = start->next;
                start = start->next;
            }

            else
            {
                old->next = t->next;
                t->next->prev = t->prev;
            }
            delete (t);
            found = 1;
            break;
        }
        else
        {
            old = t;
            t = t->next;
        }
    }
    if (found == 0)
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element deleted" << endl;
    }
}

int main()
{
    clinkedlist l;
    l.addathead(4);
    l.addathead(14);
    l.addathead(45);
    l.addathead(45);
    l.addathead(45);
    l.addathead(55);
    l.display();
    l.addafter(2, 66);
    l.display();
    l.addatend(1);
    l.display();
    l.del(75);
    l.display();

    return 0;
}
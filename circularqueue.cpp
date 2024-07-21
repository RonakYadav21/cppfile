#include <iostream>
using namespace std;
class queue
{
    int size;
    int *arr;
    int front;
    int rear;

public:
    queue(int size)
    {
        this->size = size;
        front = rear = -1;
        arr = new int[size];
    }
    void addq(int element)
    {
        if ((front == 0 && rear == size - 1) ||(front!=0 && rear=front-1))
        {
            cout << "queue is full"<<endl;
            return;
        }
        if (rear == size - 1)
        {
            rear = 0;
            arr[rear] = element;
        }
        else
        {
            rear++;
            arr[rear] = element;
            if (front == -1)
            {
                front = 0;
            }
        }
    }
    int delq()
    {
        int ans = arr[rear];
        if (front == -1 && rear == -1)
        {
            cout << "queue is empty"<<endl;
            return -1;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    void display(){

for(int i=front;i<=rear||i<size;i++) {
    cout<<arr[i]<<" ";
}  
if(rear<front){
    for(int i=0;i<=rear;i++)
{
    cout<<arr[i]<<" ";

}
   }
cout<<endl;
 }
};
int main()
{
    queue q(2);
    q.push(5);
    q.push(5);
    // q.push(5);
    // cout <<q.pop();
    // cout <<q.pop();
    cout << q.pop();
    q.display();
    return 0;
}
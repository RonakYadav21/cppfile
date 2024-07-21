// #include<iostream>
// using namespace std ;
#include<iostream>
#include<string>
using namespace std;
#define max 5 
struct data{
	char job[10];
	int prno,ord ;
};
//#define max 5 
class pque{
	data dt[max];
	int front ,rear ;
	public :
	pque(){
		front=rear=-1;
		// for(int i =0;i<=max ; i++)
		// {
			// strcpy(dt[i].job,"/0");
			// dt[i].prno=dt[i].ord=0;
		// }
	}
	void add(data num);
	data remove ();
	void sort();
	void display();
	
};
void pque::add(data num)
{
	if(rear==max-1)
	{
		cout<<"the queue is full";
	}
	else
	{
		rear++;
		dt[rear]=num;
		if (front==-1)
		front++;
		sort();
	}
}

data pque::remove()
{	
    data t;
    // strcpy(t.job,"/0");
    // t.ord=t.prno=0;
	if(front==-1)
	{
		cout<<"queue is empty";
		return (t);
	}
	else
	{	
		data temp ;
		temp=dt[front];
		dt[front]=t;
	 if(rear==front)
	 front=rear=-1;
	 else
	 front++;
	 return(temp);
	}
}

void pque::sort()
{
	data temp;
	for(int i=0;i=max-1;i++){
		for(int j=i+1;j=max-1;j++){
			if(dt[i].prno>dt[j].prno)
			{
				temp=dt[i];
				dt[i]=dt[j];
				dt[j]=temp;
			}
			else
			{
				if(dt[i].prno==dt[j].prno)
                {
					if(dt[i].ord>dt[j].ord)
					temp=dt[i];
					dt[i]=dt[j];
					dt[j]=temp;
				}
			}
		}
	}
}

void pque::display()
{
	if (front==-1)
	{
		cout<<"queue is empty ";
		
	}
	else 
	{
		for(int i=front;i=rear;i++){
		
	    // cout<<dt[i]<<endl;
        cout<<dt[i].data<<endl;
	}
	}
}
 int main ()
 {
 	pque q ;
 	int ch ;
	int j=0;
 	cout<<"enter the number for operation "<<endl;
 	cout<<"1=add  2=remove  3=display 4=exit ";
 	while(1)
 	{
 		cout<<"enter the new number for operation ";
 		cin>>ch;
 		switch(ch)
 		{
 			case 1:
 				data d;
 				cout<<"enter the job and priority :";
 				cin>>d.job>>d.prno;
 				d.ord==j++;
 				q.add(d);
 				break;
 				
 			case 2:
 				q.remove();
 				break;
 			
 			case 3:
 				q.display();
 				break;
 			
 			case 4 :
 				exit(0);
 				break;
 				
 			defult:
 				cout<<"enter the right number";
		}
	}
    return 0;
}

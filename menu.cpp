#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{
    return (a - b);
}
int multiply(int a, int b)
{
    return (a * b);
}
// int divide(int a, int b)
// {
    // return (a / b);
// }
int main()
{
    int choice = 0;
    int a, b;
    while(choice|=7){
    cout << "enter  1 for addition" << endl;
    cout << "enter  2 for sub" << endl;
    cout << "enter  3 for multiplication" << endl;
    cout << "enter 4 for divide" << endl;
    cout<<"enter 7 for exit"<<endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "enter the value of  a and b" << endl;
        cin >> a >> b;
        cout << "sum is " << add(a,b);
        break;
    case 2:
        cout << "enter  the value of a ,b" << endl;
        cin >> a >> b;
        cout << "subtraction  is " << sub(a,b) << endl;
        break;
    case 3:
        cout << "enter the value of  a and b" << endl;
        cin >> a >> b;
        cout << "multiplication  is " << multiply(a,b) << endl;
        break;
    case 4:
        cout << "enter the value of a and b " << endl;
        cin >> a >> b;
        cout<<"division is "<<(a/b)<<endl;
        break;
        case 7:
        cout<<"exit"<<endl;
        exit;
    default:
        cout << "wrong  choice" << endl;
    }
    }
        return 0;
    
}

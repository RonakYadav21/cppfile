  #include<iostream>
  using namespace std;
  int main(){  
    int i, n,  value, a[10], sum=0 ;
    cout << "enter the value of n";
    cin >> n;
    cout << "enter the elment of the array";
    for (i = 0; i < n; i++)
        cin >> a[i];
        for(i=0;i<n;i++)
        sum=sum+a[i];
      cout<<"sum o the element is :"<<sum;
        return 0;
  } 
  

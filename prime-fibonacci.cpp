#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a=0,b=1;
    cout<<"Fibonacci Series= ";
    for(int i=0;i<=n-1;i++)
    {
        if(i<2)
        {
           cout<<i<<"  ";
           arr[i]=i;
        }
        else
        {
            cout<<a+b<<"  ";
            b=a+b;
            a=b-a;
            arr[i]=b;
        }
        
    }
    cout<<endl;
    cout<<"Prime Numbers in Fibonacci are= ";
    for(int i=3;i<n;i++)
    {
        bool x=true;
        for(int c=2;c<=arr[i]/2;c++)
        {
            if(arr[i]%c==0)
            {
                x=false;
                break;
            }
        }
        if(x)
        {
            cout<<arr[i]<<"  ";
        }
    }
    return 0;
}
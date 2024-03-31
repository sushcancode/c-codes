#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    for(int i=0;i<=n-1;i++)
    {
        if(i<2)
        {
        cout<<i<<" ";
        }
        else
        {
          cout<<a+b<<" ";
          b=a+b;
          a=b-a;
        }
    }
    return 0;
}
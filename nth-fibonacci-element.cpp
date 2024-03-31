#include<iostream>
using namespace std;
int main()
{
    int n,nth;
    cin>>n;
    int a=0,b=1;
    for(int i=0;i<=n-1;i++)
    {
        if(i<2)
        {
            nth=i;
        }
        else
        {
          b=a+b;
          a=b-a;
          nth=b;
        }
    }
    cout<<b;
    return 0;
}
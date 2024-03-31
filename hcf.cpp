#include <iostream>
using namespace std;
int main()
{
    int a,b,HCF;
    cin>>a>>b;
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(int i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        {
            HCF=i;
        }
    }
    cout<<HCF<<endl;
    return 0;
}
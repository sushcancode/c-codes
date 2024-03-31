#include <iostream>
using namespace std;
int main()
{
    int a,b,LCM;
    cin>>a>>b;
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(int i=a; i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            LCM=i;
            break;
        }
    }
    cout<<LCM<<endl;
    return 0;
}
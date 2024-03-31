#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=2;i<=x;i++)
    {
        bool a=true;
        for(int n=2;n<=i/2;n++)
        {
           if(i%n!=0)
           continue;
           else 
           {
               a=false;
               break;
           }
        }
        if(a)
        cout<<i<<endl;
    }
    return 0;
}
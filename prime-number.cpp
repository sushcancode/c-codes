#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool a=true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a=0;
            break;
        }
    }
    if(a)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not Prime Number"<<endl;
    }
    return 0;
}
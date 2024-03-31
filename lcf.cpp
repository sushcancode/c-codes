#include <iostream>
using namespace std;
int main()
{
    int n,m,mul;
    cin>>n>>m;
    bool a=false;
    for(int i=2;i<=n&&i<=m;i++)
    {
        if(n%i==0&&m%i==0)
        {
            mul=i;
            a=true;
            break;
        }
    }
    if(a)
    cout<<mul<<endl;
    else
    cout<<1<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int  main() 
{
    int n;
    cin>>n;
    int b=0;
    for(int i=0;i<n;i++)
    {
     int a;
     cin>>a;
     b=b+a;
    }
    cout<<b/n<<endl;
    return 0;
}
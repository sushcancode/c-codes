#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int sum=0;
    while(n>0)
    {
        cin>>i;
        sum+=i;
        n--;
    }
    cout<<sum<<endl;
    return 0;
}
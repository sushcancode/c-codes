#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n)
    {
        int number;
        cin>>number;
        sum+=number;
        i+=1;
    }
    cout<<sum<<endl;
    return 0;
}
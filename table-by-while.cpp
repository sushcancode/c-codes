#include<iostream>
using namespace std;
int main()
{
    int n,a; //n decribes number and a describes the number of times
    cin>>n>>a;
    int i=1;
    while(i<=a)
    {
       cout<<n<<"*"<<i<<"="<<i*n<<endl;
       i++;
    }
    return 0;
}
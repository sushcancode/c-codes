#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int factorial=1;
    for(int i=n;i>=1;i--)
    {
        factorial*=i;
        cout<<i;
        if(i>1)
        cout<<"*";
    }
    cout<<"=";
    cout<<factorial<<endl;
    return 0;
}
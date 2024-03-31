#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"   ";
        }
        for(int k=2*(3-i)+1;k>0;k--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=1;i<4;i++)
    {
        for(int j=i;j<3;j++)
        {
            cout<<"   ";
        }
        for(int k=2*i+1;k>0;k--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
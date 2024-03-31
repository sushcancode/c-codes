#include<iostream>
using namespace std;
int main()
{
    int money;
    cin>>money;
    bool more_shopping;
    do
    {
        int n;
        cin>>n;
        if(money-n>0)
        {
        money-=n;
        cout<<"Left money: "<<money<<endl;
        cout<<"Wanna Shop More? Answer 1 for yes and 0 for no!"<<endl;
        cin>>more_shopping;
        }
        else
        more_shopping=false;
        cout<<"Earn money first!"<<endl;
    }
    while(more_shopping);
    cout<<money<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int money;
    cin>>money;
    do{
        cout<<"Shopping Done"<<endl;
        money-=1;
    }
    while(money>0);
    cout<<money<<endl;
    return 0;
}
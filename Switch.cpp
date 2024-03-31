#include<iostream>
using namespace std;
int main()
{
    char b;
    int a,c;
    cin>>a>>b>>c;
    switch(b)
    {
    case '+': cout<<a+c<<endl;
                 break;
    case '*': cout<<a*c<<endl;
                break;
    case '-': cout<<a-c<<endl;
                 break;
    case '/': cout<<a/c<<endl;
                break;
    default: cout<<"Enter a valid input"<<endl;
    }
    return 0;
}
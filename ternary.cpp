#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string weather;
    int temp;
    cin>>temp;
    weather=temp>=30?"hot":"cold";
    cout<<weather<<endl;
    return 0;
}
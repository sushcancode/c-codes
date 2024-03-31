#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>90)
    cout<<"Grade A1"<<endl;
    else if(marks>80)
    cout<<"Grade A2"<<endl;
    else if(marks>70)
    cout<<"Grade B1"<<endl;
    else if(marks>60)
    cout<<"Grade B2"<<endl;
    else if(marks>50)
    cout<<"Grade C1"<<endl;
    else if(marks>40)
    cout<<"Grade D1"<<endl;
    else 
    cout<<"Grade E"<<endl;
    return 0;
}
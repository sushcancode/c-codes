#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int k=0;k<=n;k++)
    {
        int temp=0;
        int rev=0;
        for(int i=k;i>0;i/=10)
        {
            temp=i%10;
            rev=rev*10+temp;
        }
        if(rev==k)
        cout<<k<<" Palindrome Number \n";
    }
    
    return 0;
}

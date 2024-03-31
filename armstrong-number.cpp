#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int cube;
    for(int i=n;i>0;i/=10)
    {
        int rem=i%10;
        cube=rem*rem*rem;
        sum+=cube;
    }
    if(sum==n)
    cout<<n<<" is Armstrong Number!";
    else
    cout<<n<<" isn't Armstrong Number!";
    return 0;
}
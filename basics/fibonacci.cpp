#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the last term";
    int n,a=1,b=1,s=0;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<a;
        s=a+b;
        a=b;
        b=s;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n,rem,sum=0,i,q;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<sum;
}
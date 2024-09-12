#include<iostream>
using namespace std;
int hcf(int a,int b)
{
    int gcd=1,i;
    for(i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            break;
        }
    }
    return gcd;
}
int main()
{
    cout<<"Enter two values";
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
}

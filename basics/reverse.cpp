#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number";
    int n;
    cin>>n;
    int s=0,rem;
    while(n>0)
    {
        rem=n%10;
        s=(s*10)+rem;
        n/=10;
    }
    cout<<"reverse is"<<s;
}
#include<iostream>
using namespace std;
int main()
{
    cout<<"how much you want to print";
    int n;
    cin>>n;
    int a=100;
    for(int i=1;i<=n;i=i+1)         //for(a=100;a>0;a-=3) reverse loop.
    {
        cout<<a<<"  ";
        a-=3;
    }
}
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter two numbers";
    int n,m;
    cin>>n>>m;
    int i=1;
    float product=1;
    bool flag=true;
    if(m<0)
    {
        flag=false;
        m=-m;
    }
    while(i<=m)
    {
        product*=n;
        i++;
    }
    if(flag==false)
    {
    product=1/product;
    }
    cout<<product;
}
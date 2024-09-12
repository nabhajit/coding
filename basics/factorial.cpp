#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter you number";
    int n;
    cin>>n;
    int i=1,product=1;
    while(i<=n)
    {
        product*=i;
        i++;
    }
    cout<<product;

}
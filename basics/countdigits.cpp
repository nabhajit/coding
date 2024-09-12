#include<iostream>
using namespace std;
int main()
{
    int n,a;
    int count=0;
    cout<<"enter the number";
    cin>>n;
    a=n;
    while(n>0)
    {
        count++;
        n/=10;
    }
    cout<<"total digits are"<<count;
    if(a==0)
    cout<<'1';
}
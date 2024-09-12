//1 2   4   8..
#include<iostream>
using namespace std;
int main()
{
    cout<<"how much you want to print";
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i=i+1)
    {
        cout<<a<<"  ";
        a*=2;
    }
}
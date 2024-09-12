#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number u want factorial";
    int n;
    cin>>n;
    int i=1;
    int product=1;
    while(i<=n)
    {
        product*=i;
        cout<<product<<" ";
        i++;
    }
}
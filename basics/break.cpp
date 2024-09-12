#include<iostream>
using namespace std;
int main()
{
    cout<<"enter your number";
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<"  is a composite number";
            break;
        }
    }
}   /*when the loop satisfy the condition the loop will ex
itself.the whole program will stop.*/
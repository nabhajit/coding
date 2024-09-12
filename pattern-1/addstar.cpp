/*
   *
  ***
   * 
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"enter the number";
    int n;
    cin>>n;
    int mid=(n/2)+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==mid || i==mid)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
}

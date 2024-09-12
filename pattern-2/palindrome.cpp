/*
   1
  121
 12321
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"Enter the number";
    int n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        cout<<k;
        for(int q=i-1;q>=1;q--)
        cout<<q;
        cout<<endl;
    }
}

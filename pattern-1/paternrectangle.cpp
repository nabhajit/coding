/*
*****
*****
*****
*****
*/
#include<iostream>
using namespace std;
int main()
{
    int i,r,c,j;
    cout<<"enter the number of rows";
    cin>>r;
    cout<<"enter the number of column";
    cin>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
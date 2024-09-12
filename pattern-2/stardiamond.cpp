#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"Enter the number";
    int n;
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(i=1;i<=2*n-1;i++)
    {
        //space
        for(j=1;j<=nsp;j++)
        cout<<" ";
        if(i<n) nsp--;
        else nsp++;
        //star
        for(k=1;k<=nst;k++)
        cout<<"*";
        if(i<n) nst+=2;
        else   nst-=2;
        cout<<endl;
    }


    }


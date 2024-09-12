/*
1
13
135
1357
*/
#include<iostream>
 using namespace std;
 int main()
 {
    int i,j;
    cout<<"last value is";
    int n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
 }
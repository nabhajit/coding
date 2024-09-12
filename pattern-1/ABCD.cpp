/*
ABCD
ABCD
ABCD
ABCD
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"Enter the last number";
    int n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}
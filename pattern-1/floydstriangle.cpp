/*
1
2   3
4   5   6
7   8   9   10
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k=1;
    cout<<"Enter the last number";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<k<<"  ";
            k++;
        }
    cout<<endl;
    }
}
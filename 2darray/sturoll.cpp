#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row and column";
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i;i<=m-1;i++){
        for(int j;j<=n-1;j++)
            cin>>arr[i][j];
    }
    for(int i;i<=3;i++){
        for(int j;j<=3;j++)
            cout<<arr[i][j];
    }
}
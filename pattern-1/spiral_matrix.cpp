#include<iostream>
#include<climits>
#include<string>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the row of the matrix";
    cin>>n;
    cout<<"Enter the column of the matrix";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}


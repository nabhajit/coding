#include<iostream>
 using namespace std;
 int main()
 {
    cout<<"Enter the number of element in this array";
    int n;
    cin>>n;
    int arr[n];
    int i;
    for( i=0;i<=n-1;i++){
        cin>>arr[i];
    }
        int s=0;
        for(int i=0;i<=n-1;i++)
        {
           s=s+arr[i];
        }
        cout<<s;    
 }
/*
1
01
101
0101
*/
/*#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the last number";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            
    cout<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the last number";
    cin>>n;
    int a=5;
    for(i=1;i<=n;i++){
        if(i%2==0)a=0;
        else a=1;
        for(j=1;j<=i;j++)
        {
            cout<<a;
            //fliping
            if(a==0) a=1;
            else a=0;
        }
            
    cout<<endl;
    }
}
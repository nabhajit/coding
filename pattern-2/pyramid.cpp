/*#include<iostream>
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
        for(k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
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
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++){
        cout<<" ";
        }
        nsp--;
    for(k=1;k<=nst;k++){
    cout<<"*";
    }
    nst+=2;
    cout<<endl;
}
}


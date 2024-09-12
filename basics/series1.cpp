//S=1-2+3-4+5-6......n
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the last number";  //printf() in c.
    int n;                          
    cin>>n;                         //scanf in c.
    int s=0;
    int i=1;
    while(i<=n)
    {
        if(i%2==0)
        s=s+(-1)*i;
        else
        s=s+i;
        i++;
    }
    cout<<s;
}
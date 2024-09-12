#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter 3 numbers"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
        cout<<"a is greatest";
        }
        else 
        {
            cout<<"c is the greatest";
        }
    }   
    else
    {
        if(b>c)
        {
        cout<<"b is the greatest";
        }
        else{
            cout<<"cis the greatest";
        }
    }

}
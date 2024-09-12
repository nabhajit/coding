#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your character";
    char c;
    cin>>c;
    int a;
    a=(int)c;
    if(a>=65 && a<=90)
    {
        cout<<"uppercase";
    }
    else if(a>=97 && a<=122)
    {
        cout<<"lowercase";
    }
    else
    {
        cout<<"not a character";
    }
    cout<<c<<endl<<"the ascii value is"<<a;

}
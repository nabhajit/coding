#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter three angle of the traingle";
    int a,b,c,d;
    cin>>a>>b>>c;;
    d=a+b+c;
    if(d==180)                              //for side(a+b>c) and so on...
    {                       
        cout<<"it is a triangle";
    }
    else{
        cout<<"not a triangle";
    }
}
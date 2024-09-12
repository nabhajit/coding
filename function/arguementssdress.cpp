#include<iostream>
using namespace std;
int a=13;       //global variable.
int fun(int x,int y)    //formal parameter
{
    cout<<"Address of main x"<<&x<<endl;
    cout<<"Address of main y"<<&y<<endl;
}
int main()          
{
    int x=3;
    int y=7;
    cout<<"Address of main x"<<&x<<endl;
    cout<<"Address of main y"<<&y<<endl;
   int c= fun(x,y);    //actual parameter
}

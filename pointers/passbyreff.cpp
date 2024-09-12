#include<iostream>
using namespace std;
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<*x;
    cout<<*y;
}
int main()
{
    int a,b;
    cout<<"enter your numbers";
    cin>>a;
    cin>>b;
    int* x=&a;
    int* y=&b;
    swap(x,y);
}
    
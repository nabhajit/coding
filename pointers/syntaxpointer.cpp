#include<iostream>
using namespace std;
int main()
{
    //data_type* pointer name
    /*int x=4;
    int* p=&x;
    cout<<p;*/
    int x=4;
    int* p=&x;      //p stores the  adress of x
    cout<<*p;  //eturns the original value of x if 8 is given.
}       //*p is dereference operators.
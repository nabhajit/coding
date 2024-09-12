#include<iostream>
using namespace std;
int main()
{
    /*int x=7;
    int* ptr=&x;
    cout<<ptr<<endl;    //0x61ff08
    ptr++;              //0x61ff0c(+4 value)
    cout<<ptr<<endl;
    cout<<*ptr; */        //strange value found coz memory is not allocated at ptr++;
    /*bool flag=true;
    bool* ptr=&flag;
    cout<<ptr<<endl;        //0x61ff0b
    ptr++;
    cout<<ptr;*/              //0x61ff0c(+1 coz bool has only 1 byte)
   /* int x=7;
    int* ptr=&x;
    (*ptr)++;
    cout<<*ptr;*/
}
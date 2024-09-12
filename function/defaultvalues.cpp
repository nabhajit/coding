#include<iostream>
using namespace std;
                        //case 1:
/* 
void fun(int x=7,int y=8)    default value of x and y is 7&8.
{
    cout<<x<<endl<<y;
}
int main()
{
    fun();
}
*/
                         //case 2:
/*
void fun(int x=7,int y=8)    default value of x and y is 7&8.
{
    cout<<x<<endl<<y;
}
int main()
{
    fun(4,6);       actual parameter has higher priority.
}
*/
                         //case 3:
/*
void fun(int x=7,int y=8)    default value of x and y is 7&8.
{
    cout<<x<<endl<<y;
}
int main()
{
    fun(4,6);       actual parameter has higher priority.
}
*/
                //case 4:
/*
void fun(int x=7,int y=8)    default value of x and y is 7&8.
{
    cout<<x<<endl<<y;
}
int main()
{
    fun(4);      it will return 4 to xand y will remain same actual parameter has higher priority.
}
*/
                    //case 5:
/*
void fun(int x,int y)    default value of x and y is 7&8.
{
    cout<<x<<endl<<y;
}
int main()
{
    fun(4);
}
*/
                //case 6:
/*
void fun(int x=7,int y)    default value of x and y is 7&8.
{
    cout<<x<<endl<<y;
}
int main()
{
    fun(4);
}
*/
                //case 7:
/*
void fun(int x=7,int y)    default value of x and y is 7&8.
{
    cout<<x<<endl<<y;
}
int main()
{
    fun(4);
}
*/
                        //case 4:error have to declare all the values in formal parameter if one is declared.
/*
void fun(int x=7,int y)    default value of x and y is 7&8.
{
    cout<<x<<endl<<y;
}
int main()
{
    fun(4);
}
*/    


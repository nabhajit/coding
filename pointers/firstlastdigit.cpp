#include<iostream>
using namespace std;
void find(int* ptr1,int* ptr2,int* ptr3)
{
    *ptr3=*ptr1%10;
    while(*ptr1>9)
    {
        *ptr1/=10;
    }
    *ptr2=*ptr1;
}
int main()
{
    cout<<"enter your number";
    int num;
    cin>>num;
    int* ptr1=&num;
    int frd,lrd;
    int* ptr2=&frd;
    int* ptr3=&lrd;
    find(ptr1,ptr2,ptr3);
    cout<<*ptr2<<endl<<*ptr3;
}
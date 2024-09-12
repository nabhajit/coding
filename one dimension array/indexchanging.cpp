#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,5,6,8,9};
    int* ptr=arr;   //storing address.
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";  //or cout<<*ptr<<" "; ptr++ or ptr[i];or i[arr].
    }
    cout<<endl;
    *ptr=8;
    ptr++;
    *ptr=9;
    ptr--;
    for(int i=0;i<=4;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
}
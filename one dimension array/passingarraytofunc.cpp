#include<iostream>
using namespace std;
dance(int* a, int size)
{
    for(int i=0;i<=size-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
change(int* b, int s)
{
    b[0]=45;
}
int main()
{
    int arr[5]={12,32,432,43,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    dance(arr,size);
    change(arr,size);
    dance(arr,size);
}
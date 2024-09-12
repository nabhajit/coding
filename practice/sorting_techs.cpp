#include<iostream>
using namespace std;

void bubble(int* arr, int size)
{
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;i<n-1-i;j++)
        {
            if(arr[j+1]<arr[j])
                swap(arr[j+1],arr[j]);
        }
    }
}
void insertion (int* arr,int size)
{
    for(i=1;i<n;i++)
    {
    int current = arr[i];
    int j= i-1;
    while(j>=0 && current<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
void selection_sort(int* arr.int size)
{
    for(i=0;i<n-1;i++)
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[min],arr[j])
}


int main()
{

}

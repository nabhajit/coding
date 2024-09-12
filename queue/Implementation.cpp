//Array implementation
#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;

class Queue
{
    public:
    int f=0;
    int b=0;
    int arr[5];
    void push(int val)
    {
        arr[b]=val;
        b++;
    }
    void pop()
    {
        f++;
    }
    int peek()
    {
        return arr[f];
    }
    bool empty()
    {
        if(f==b)
        {
            return true;
        }
        return false;
    } 
    void display()
    {
        for(int i=f;i<b;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()

{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    //reverse(q);
    //display(q);
}
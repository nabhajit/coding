#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int> &q)
{
    int s=q.size();
    for(int i=1;i<=s;i++)
    {
        int x=q.front();
        cout<<x;
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverse(queue<int> &q)
{
    stack<int> st;
    while(q.size()!=0)
    {
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size() !=0)
    {
        int x=st.top();
        st.pop();
        q.push(x);
    }
}

void removeAtevenIndices(queue<int> &q)
{
    int n=q.size();
    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
        q.pop();
        else
        {
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main()
{
    queue<int> q;
    //basic operations on queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    reverse(q);
    display(q);
}
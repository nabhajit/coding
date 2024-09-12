#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int> q)
{
    int n = q.size();
    for(int i = 0; i < n; i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl; // Add a newline for better output formatting
}

void reversek(int k, queue<int>& q) // Pass by reference
{
    if (q.empty() || k > q.size()) // Handle edge cases
        return;

    stack<int> st;
    // Correct the loop to push exactly k elements into the stack
    for(int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    // Push the stack elements back into the queue
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    // Move the remaining elements in the queue to maintain order
    int n = q.size();
    for(int i = 0; i < n - k; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    cout << "Original queue: ";
    display(q);
    
    int k = 2;
    reversek(k, q);

    cout << "Queue after reversing first " << k << " elements: ";
    display(q);

    return 0;
}


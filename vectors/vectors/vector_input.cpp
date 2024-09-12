#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"enter the number of loops u want";
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(i < n-1)
        cout<<"capacity is "<<v.capacity();
        else 
            continue;
    }
    for( int i=0;i<=n-1;i++)
        cout<<v[i]<<"\t";
}

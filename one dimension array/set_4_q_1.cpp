#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    
    vector<int> v; 
    for(int i=0; i<n; i++)
    {
        int x;
        cout<<"Enter the array element: ";
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        if(v[i] == target)
            vec.push_back(i);
    }
    
    cout<<"Indices of the target element in the array: ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}
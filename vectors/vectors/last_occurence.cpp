//Last occurence of the element..

/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Enter no. of elemnt you want";
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter the element you want to search";
    int num;
    cin>>num;
    for(int i=v.size();i>=0;i--)
    {
        if(num==v[i]){
            cout<<"found at"<<i;
            break;
    }
}

*/

/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Enter the number of elements you want: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter the element you want to search: ";
    int num;
    cin >> num;

    bool found = false;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (num == v[i])
        {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found in the vector." << endl;
    }

    return 0;
}
*/
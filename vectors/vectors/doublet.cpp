/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    cout<<"Enter the no. of element you want";
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the number";
    int num;
    cin>>num;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j] && v[i]+v[j]==num)
                cout<<"numbers are in "<<i<<"\t"<<j;
        }
    }
}*/
#include <iostream>
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

    cout << "Enter the number: ";
    int num;
    cin >> num;

    bool found = false;
    fo5r (int i = 0; i < v.size() - 1; i++)         //becouse ulto dik dia print hobe abr sob repeated asbe thm
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] == v[j] && v[i] + v[j] == num)
            {
                cout << "Pair found: " << v[i] << " and " << v[j] <<"in indices"<<i<<j<<endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "No pair of same elements found with the given sum." << endl;
    }

    return 0;
}

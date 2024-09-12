#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector <int> v2(v.size());
    for (int i = v.size() - 1, j = 0; i >= 0; i--, j++)
    {
        v2[j] = v[i];
    }

    cout << "Reversed elements in v2:" << endl;
    for (int j = 0; j < v2.size(); j++)
    {
        cout << v2[j] << " ";
    }

    return 0;
}


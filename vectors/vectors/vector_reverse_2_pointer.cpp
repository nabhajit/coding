#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<int> &a)
{
    for(int i=0;i<=a.size()-1;i++)
        cout<<a[i]<<" ";
        cout<<endl;
}
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
    display(v);
    int i=0;
    int j=v.size()-1;
    while(i<j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    display(v);
}       //reverse(v.begin,v.end);
    
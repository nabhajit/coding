#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector <int> &a)
{
    for(int i=0;i<=a.size()-1;i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
int par_rev(int i, int j, vector<int> &a)
{
    while(i<=j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    vector <int> v;
    cout<<"enter the number of loop";
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<"enter your limits";
    int i1,i2;
    cin>>i1;
    cin>>i2;
    par_rev(i1,i2,v);
    display(v);
}

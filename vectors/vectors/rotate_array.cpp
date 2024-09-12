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
    cout<<"enter the value of k";
    int k;
    cin>>k;
    n=v.size();
    if(k>n)
    k=k % n;
    par_rev(0,n-k-1,v);
     par_rev(n-k,n-1,v);
      par_rev(0,n-1,v);

    display(v);
}

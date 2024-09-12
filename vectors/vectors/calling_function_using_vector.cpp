#include<iostream>
#include<vector>
using namespace std;
int call(vector<int> a)    //it will work as call by value if not given ampersand sign.
{
    a[0]=100;
}
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    v.push_back(2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i);      //at function to print vector
    }
    cout<<endl;
    call(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i);      //at function to print vector
    }

}
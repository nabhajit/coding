#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; //declare 0 size array
    //inserting
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<endl;
    v.push_back(46);
    cout<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.capacity()<<endl;               //capacity of the array increases dynamically !!
    v.push_back(50);
    cout<<v.capacity() <<endl;
    //if we want to access or update
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}

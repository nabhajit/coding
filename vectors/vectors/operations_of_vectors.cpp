#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1); // s1 c1
    v.push_back(5); //s2  c2
    v.push_back(9); //s3  c4
    v.push_back(3); //s4  c4
    v.push_back(7); //s5  c8
    cout<<"size is "<<v.size()<<endl;;
     cout<<"capacity is "<<v.capacity()<<endl;
     v.pop_back();
     v.pop_back();
     cout<<"size is "<<v.size()<<endl;
     cout<<"capacity is "<<v.capacity();

}

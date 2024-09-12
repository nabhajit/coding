#include<string>
#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"enter the number fo string";
    int n;
    cin>>n;
    int v=0;
    vector<string> vec; 
    for(int i=0;i<n;i++)
    {
        string x;
        cout<<"Enter a string for the language";
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]=="--X")
            --v;
        else if(vec[i]=="X++")
            v++;
        else if(vec[i]=="++X")
            ++v;
        else if(vec[i]=="X--")
            v--;
    }
    cout<<v;
}
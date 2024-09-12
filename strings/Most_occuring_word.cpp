#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    cout<<"enter a string";
    string str;
    getline(cin,str);
    stringstream ss(str);
    string word;
    vector<string> v;
    while(ss>>word)
    {
        v.push_back(word);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    //int max=INT16_MAX;
    int count=1;
    int maxCount=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]){
            count++;
        }
        else 
            count=1;
            maxCount=max(maxCount,count);
    }
    cout<<maxCount;
}

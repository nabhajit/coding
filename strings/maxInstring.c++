#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    cout<<"Enter the length of string array: ";
    int n;
    cin>>n;
    cin.ignore();  // This will consume the newline character left by cin
    vector<string> str(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
    int max=stoi(str[0]);
    int ind=0;
    for(int i=1;i<n;i++)
    {
        if(stoi(str[i]) > max)  
        {
            max=stoi(str[i]);
            ind=i;
        }
    }
    cout<<max<<ind;
    return 0;
}

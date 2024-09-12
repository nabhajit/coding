#include<iostream>
#include<string>
#include<algorithm>
#include "../../../../../MinGW/include/c++/11.2.0/bits/algorithmfwd.h"
using namespace std;

int main()
{
    cout<<"Enter a string--"<<endl;
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
}
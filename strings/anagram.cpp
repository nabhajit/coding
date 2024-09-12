#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string str1="Nabhajitroy";
    string str2="royNabhajit";
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1 == str2)
        cout<<1;
    else
        cout<<0;
}
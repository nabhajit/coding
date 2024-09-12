//basic use of the stoi and stoll function is to converta a string(only numbers) to integer and long long integer 
#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    int x=stoi(str);
    cout<<x+1;
}

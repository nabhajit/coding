#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
int main()
{
    cout<<"Enter a string--";
    string str;
    int i=0,count=0;
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
        if(i==0)
        {
             if(str[i] != str[i+1])
             count++;
        }

       else if(i==str.length())
        {
             if(str[i] != str[i-1])
             count++;
        }
       else  if(str[i] != str[i+1] && str[i] != str[i-1] )
        count++;
    }
    cout<<count;
}
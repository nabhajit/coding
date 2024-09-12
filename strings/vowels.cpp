#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i;
    int count =0;
    getline(cin,str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'  ||  str[i]=='e' ||  str[i]=='i' || str[i]=='o' || str[i]=='u')
            count++;
            i++;
    }
    cout<<count;
}
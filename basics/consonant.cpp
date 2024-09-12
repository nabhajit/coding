#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your character";
    char ch;
    cin>>ch;;
    int a;
    a=(int)ch;
     if(a>=65 && a<=90 || a>=97 && a<=122) 
    {
        cout<<"it is a character"<<endl;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='a' || ch=='A' || ch=='E' || ch=='O' || ch=='U')
        {
            cout<<"vowel";
        }
        else{
            cout<<"consonant";
        }
    }
    else
    {
        cout<<"not a character";
    }
    
}
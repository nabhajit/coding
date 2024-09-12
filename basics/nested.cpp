//divisible by 5 or 3 but not 15
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your number"<<endl;
    int n;
    cin>>n;
    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
            cout<<"Number is divisible by 5 and 3 but not by 15";
        }
        else
        {
            cout<<"not divisible";
        }
    }
    else{
        cout<<"not divisible";
    }
}



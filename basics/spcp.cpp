#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the cp";
    int cp;
    cin>>cp;
    cout<<"Enter the sp";
    int sp;
    cin>>sp;
    if(cp<sp)
    {
        cout<<"the bussiness is in profit";
        int per;
         per=(sp-cp)/cp*100;
        cout<<per;
    }
    if(cp==sp)
    {
        cout<<"No profit No loss";
    }
    else
    {
        cout<<"the bussiness is in loss";
        int per1;
         per1=(cp-sp)/sp*100;
        cout<<endl<<per1;
    }
}




#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter number of months";
    cin>>x;
    /*1  3   5   7  8   10  12---->31 days
    4   6   9   11---->30 days
    2---->29
    */
   switch(x<=7 && x%2==0 && x>=12)
    {
        case 1:
        cout<<"31 days in this month";

    }
    switch(x<=6 && x%2!=0 && x>=12)
    {
        case 1:
        cout<<"this month have 30 days";
    }
    switch(x)
    {
        case 2:
        cout<<"this is feb";
    }
} //not fully correct



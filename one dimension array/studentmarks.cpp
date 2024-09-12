#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of students";
    int stu;
    cin>>stu;
    int marks[stu];
    for(int i=0;i<stu-1;i++)
    {
        cin>>marks[i];
    }
    for( int i=0;i<stu-1;i++)
    {
        if(marks[i]<=35)
            cout<<marks[i]<<endl<<"failed";
    }
}
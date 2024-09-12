#include<iostream>
using namespace std;

class C
{
    int val;
    public:
    void display(){
        cout<<"the class is c";
        cout<<val;
    }
    int getval()
    {
        return val;
    }
};

class B
{
    C c;
    public:
    b()
    {
        c.getval();
    }
};

int main()
{
    B b;
    return 0;
}


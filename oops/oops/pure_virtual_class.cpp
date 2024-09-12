#include <iostream>
using namespace std;
class hello
{
public:
    virtual void prog()=0;
};
class deri : public hello
{
public:
    virtual void prog()
    {
        cout << "beta hai";
    }
};
int main()
{
    hello *ptr;
    deri obj;
    ptr=&obj;
    ptr->prog();
   // obj.prog();
}

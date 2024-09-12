#include<iostream>
using namespace std;
 
class Rectangle
{
    public:
    int l;
    int b;
    Rectangle() //no argument are passed constructor
    {
        l=0;
        b=0;
    } 

    Rectangle (int x, int y)    //parameterised construvtor
    {
        l=x;
        b=y;
    }

    Rectangle(Rectangle& r )     //copy constructor-initialise an obj by another obj
    {
        l=r.l;
        b=r.b;
    }
    /*
    destructor---
    *function is called when object is deleted.
    can't pass any parameter.
    name--->  ~(class name)
    */
   ~Rectangle()
   {
    cout<<destructor is called;
   }
};
int main()
{
    /*
    destructor mannually
    Rectangle* r1= new Rectangle();
    cout<<r1->l<<r->b<<endl;
    delete r1;
    */
}
#include<iostream>
using namespace std;

class player
{
    private:
    int score;
    int health;
    int age;
    bool alive;

    public:
    //getters
    int gethealth()
    {
        return health;
    }
    int getscore()
    {
        return score;
    }
    int getage()
    {
        return age;
    }
    int getalive()
    {
        return alive;
    }
    //setters
    void sethealth(int health)
    {
         this->health=health;
    }
    void setscore(int score)
    {
        this->score=score;
    }
    void setage(int age)
    {
       this->age=age;
    }
    void setalive(bool alive)
    {
        this->alive=alive;
    }
};
 
int addscore(player a,player b)        //passing classes to func.
 {
    return a.getscore()+b.getscore();
 }

player comparescore(player a , player b)
{
    if(a.getscore() > b.getscore())
        return a;
    else
        return b;
}

int main()
{
    player harsh;                      //object creation statically.
    player raghav;

    player *urvi= new player;          //dynamic memory allocation for player datatype-------------->int a=new int;
    player urviObject=*urvi;

    harsh.sethealth(100);
    harsh.setage(25);
    harsh.setscore(50);
    harsh.setalive(true);

    raghav.sethealth(10);
    raghav.setage(20);
    raghav.setscore(5);
    raghav.setalive(true);

    urviObject.setscore(40);                //urvi->getscore();
    urviObject.setscore(50);
    
    cout<<urviObject.getscore()<<endl;      //urvi->getscore();
    cout<<addscore(harsh,raghav)<<endl;
    player sanket=comparescore(harsh,raghav);
    cout<<sanket.getscore();
    
}
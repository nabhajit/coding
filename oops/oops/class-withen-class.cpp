#include<iostream>
using namespace std;

class Gun       //data type
{
    private:
    int ammo;
    int damage;
    int scope;

    public:
    //getters
    int getammo()
    {
        return ammo;
    }
    int getdamage()
    {
        return damage;
    }
    int getscope()
    {
        return scope;
    }
    //setters
    void setammo(int ammo)
    {
        this->ammo=ammo;
    }
    void setdamage(int damage)
    {
        this->damage=damage;
    }
    void setscope(int scope)
    {
        this->scope=scope;
    }
};
class player
{
    private:
    int score;
    int health;
    int age;
    bool alive;
    Gun gun;
    class Helmet
    {
        
    };

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
    Gun getgun()
    {
        return gun;
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
    void setgun(Gun gun)
    {
        this->gun=gun;
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
    player harsh;                     //object creation statically.
    player raghav;
    Gun akm;
    Gun uzi;

    akm.setammo(100);
    akm.setdamage(50);
    akm.setscope(4);
    harsh.sethealth(100);
    harsh.setage(25);
    harsh.setscore(50);
    harsh.setalive(true);
    harsh.setgun(akm);

    uzi.setammo(20);
    uzi.setdamage(15);
    uzi.setscope(0);
    raghav.sethealth(10);
    raghav.setage(20);
    raghav.setscore(5);
    raghav.setalive(true);
    raghav.setgun(uzi);

    cout<<addscore(harsh,raghav)<<endl;
    player sanket=comparescore(harsh,raghav);
    cout<<sanket.getscore();
    
}
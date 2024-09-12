#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
    int roll;
    float marks;

public:
    void getdata(int roll, float marks)
    {
        this->roll = roll;
        this->marks = marks;
    }

    void show_data()
    {
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

class person : public student
{
private:
    char name[50];
    int age;

public:
    void read_data(char* name, int age)
    {
        strcpy(this->name, name);
        this->age = age;
    }

    void display_data()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class game : public person
{
private:
    char game_name[50];

public:
    void read_game(char* game_name)
    {
        strcpy(this->game_name, game_name);
    }

    void display_game()
    {
        cout << "Game Name: " << game_name << endl;
    }
};

int main()
{
    game gandu;
    gandu.read_data("subendu", 20);
    gandu.getdata(1, 90);
    gandu.read_game("Chess");

    g.display_data();
    g.show_data();
    g.display_game();

    return 0;
}
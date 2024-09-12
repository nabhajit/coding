#include<iostream>
#include<string>
using namespace std;

class Book {
public:
    char name;
    int price;
    int pages;

    int countBooks(int p) {
        if (price < p)
            return 1;
        else
            return 0;
    }

    bool isBookPresent(char book) {
        if (book == name)
            return true;
        else
            return false;
    }
};

int main() {
    Book Harry;
    Harry.name = 'h';
    Harry.price = 500;
    Harry.pages = 800;
    cout << Harry.countBooks(2000)<<endl;
    cout << Harry.isBookPresent('h');
    return 0;
}
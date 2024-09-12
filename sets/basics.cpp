
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <unordered_set>  
using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);  
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(4);
    cout << s.size() << endl;  

    // for each loop
    for (int ele : s) {
        cout << ele << " ";  
    }
    return 0;
}

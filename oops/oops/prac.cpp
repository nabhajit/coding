
/*
#include<iostream>
using namespace std;

class number {
public:
    int a;
public:
    number(int b) {
        a = b;
    }
    number(number& b) {
        a = b.a;
    }
    int factorial() {
        if (a == 0) {
            return 1;
        }
        int val = 1;
        for (int i = a; i > 0; i--) {
            val *= i;
        }
        return val;
    }
};

int main() {
    number ob(4);
    cout << ob.factorial();
    return 0;
}
*/

//amstrong number
/*
#include<iostream>
#include<cmath>
using namespace std;

class ams {
private:
    int a;
public:
    ams(int b) {
        a = b;
    }
    int amstrong(int a) {
        int copy = a;
        int r, temp, sum = 0;
        do {
            r = a % 10;
            a = a / 10;
            sum += pow(r, 3);
        } while (a > 0);
        if (copy == sum) {
            cout << "Amstrong number";
        }
        else {
            cout << "Not an Amstrong number";
        }
        return sum;
    }
};

int main() {
    ams ob(0);
    cout << ob.amstrong(153);
    return 0;
}
*/

//gcd
/*
#include<iostream>
#include<cmath>
using namespace std;

class gcd {
public:
    void gcd_of_two_numbers(int a, int b) {
        if (a == 0) {
            cout << b;
        }
        else if (b == 0) {
            cout << a;
        }
        else {
            gcd_of_two_numbers(b, a % b);
        }
    }
};

int main() {
    int num1, num2;
    cout << "Enter the numbers: " << endl;
    cin >> num1 >> num2;
    gcd ob;
    ob.gcd_of_two_numbers(num1, num2);
    return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;

class gcd {
public:
    void gcd_of_three_numbers(int a, int b, int c) {
        int result = gcd_of_two_numbers(a, b);
        result = gcd_of_two_numbers(result, c);
        cout << "GCD of the three numbers is: " << result;
    }

    int gcd_of_two_numbers(int a, int b) {
        if (a == 0) {
            return b;
        }
        else if (b == 0) {
            return a;
        }
        else {
            return gcd_of_two_numbers(b, a % b);
        }
    }
};

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    gcd ob;
    ob.gcd_of_three_numbers(num1, num2, num3);
    return 0;
}
*/

// #include <iostream>
// #include <cmath>
// using namespace std;

// int binaryToDecimal(int binary) {
//     int decimal = 0;
//     int base = 0;
    
//     while (binary > 0) {
//         int lastDigit = binary % 10;
//         decimal += lastDigit * pow(2, base);
//         binary /= 10;
//         base++;
//     }
    
//     return decimal;
// }

// int main() {
//     int binaryNumber;
//     cout << "Enter a binary number: ";
//     cin >> binaryNumber;
    
//     int decimalNumber = binaryToDecimal(binaryNumber);
//     cout << "Decimal equivalent: " << decimalNumber << endl;
    
//     return 0;
// }
/*
#include<iostream>
#include<cmath>
#define max 32
using namespace std;

void decimal_to_binary(int num) {
    int array[max];
    int i = 0;
    
    while (num > 0) {
        array[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    int size = i;
    
    for (i = size - 1; i >= 0; i--) {
        cout << array[i];
    }
}

int main() {
    int num1;
    cout << "Enter the number: " << endl;
    cin >> num1;
    
    decimal_to_binary(num1);
    
    return 0;
}
*/
#include <iostream>


int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
   
    int count = 0;

    int permutations = factorial(3); 

    
    for (int i = 0; i < permutations; ++i) {
        
        int permutation = i;
        int digits[3] = {9, 8, 0}; 
        int sum = 0;
        int temp = 0;

        
        for (int j = 0; j < 3; ++j) {
            temp = permutation % (3 - j);
            permutation /= (3 - j);
            sum += digits[temp];
        }
        int swap = digits[temp];
        digits[temp] = digits[2 - j];
        digits[2 - j] = swap;
    }
        if (sum % 2 == 0 && sum != 0) {
           
            count++;
        }
    }

    /
    int total_combinations = count * 3;
    
    cout << total_combinations;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int minTimeToRepairCars(vector<int>& ranks, int n, int cars) {
    int totalCarsPerTimeUnit = 0;
    
    for (int rank : ranks) {
        totalCarsPerTimeUnit += rank * n * n;
    }
    
    int minTime = (cars + totalCarsPerTimeUnit - 1) / totalCarsPerTimeUnit;
    
    return minTime;
}

int main() {
    vector<int> ranks = {4,2,3,1}; 
    int n = 1; 
    int cars = 20; 
    
    int minTime = minTimeToRepairCars(ranks, n, cars);
    
    cout << "Minimum time taken to repair all cars: " << minTime << " units" << endl;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <random>
#include <chrono>

using namespace std;

// Task t1 : calculate products of large numbers
void calculate_products() {
    // Generate random numbers
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<unsigned long long> dis(1000000000000000000ULL, 0xFFFFFFFFFFFFFFFFULL);

    volatile unsigned __int128 result = 0; 
    for (int i = 0; i < 500000; ++i) {
        unsigned long long a = dis(gen);
        unsigned long long b = dis(gen);
        
        // Product of two numbers, stored in 128 bits
        result = (unsigned __int128)a * b;
    }
}

int main() {
    calculate_products();
    return 0;
}
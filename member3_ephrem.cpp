//Random Number Generator Setup
#include <iostream>
#include <cstdlib>  // For rand(), srand()
#include <ctime>    // For time()

int main() {
    std::srand(std::time(nullptr));  // Seed random number generator

    int randomNumber = std::rand() % 50 + 1;  // Random number from 1 to 50

    std::cout << "Generated random number: " << randomNumber << "\n";

    return 0;
}

#include <cstdlib>  // for rand, srand
#include <ctime>    // for time

srand(time(0)); // Initialize random seed
int randomNumber = rand() % 50 + 1; // Generate number between 1 and 50

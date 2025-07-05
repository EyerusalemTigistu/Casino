// Member 3 — Random Number Generator Setup
#include <random>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> dist(1, 50);

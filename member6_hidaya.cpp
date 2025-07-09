//get bet amount
#include <iostream>
#include <limits>

int main() {
    int capital = 100; // example capital
    int bet = 0;

    std::cout << "Enter betting money for this round: ";

    while (!(std::cin >> bet) || bet <= 0 || bet > capital) {
        std::cin.clear(); // clear error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
        std::cout << "Invalid bet (1-" << capital << "). Try again: ";
    }

    std::cout << "You bet: " << bet << std::endl;

    return 0;
}

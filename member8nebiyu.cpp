// ----- check funds -----
#include <iostream>

int main() {
    int money = 50;       // example starting money
    char cont = 'y';      // continue playing?
    int round = 1;

    while ((cont == 'y' || cont == 'Y')) {
        std::cout << "\n--- Round " << round << " ---\n";
        std::cout << "Current money: " << money << "\n";

        // Example money deduction for demonstration:
        money -= 10;

        // ----- check funds -----
        if (money <= 0) {
            std::cout << "You're out of money. Game over—thank you for playing!\n";
            break;
        }

        // ----- continue? -----
        std::cout << "Continue? (y/n): ";
        std::cin >> cont;
        ++round;
    }

    return 0;
}

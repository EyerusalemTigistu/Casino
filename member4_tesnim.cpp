//game loop setup
#include <iostream>

int main() {
    int capital = 100;   // this is a starting money 
    char cont = 'y';     // this check if player want to continue 

    while ((cont == 'y' || cont == 'Y') && capital > 0) {

        // (askuser input and process the round)

        std::cout << "Round played. Capital: " << capital << "\n";

        // Ask player if they want to continue
        std::cout << "Continue? (y/n): ";
        std::cin >> cont;

        // --- Game Round End ---
    }

    std::cout << "Game over. You leave with " << capital << "\n";
    return 0;
}

//  Member 7 — Generate Winner and Handle Result
#include <iostream>

int main() {
    int randomNumber = 25;  
    int guess = 25;         
    int capital = 100;      
    int bet = 10;           

    std::cout << "Winning number was: " << randomNumber << "\n";

    capital -= bet; 

    if (guess == randomNumber) {
        int winnings = bet * 2;
        capital += winnings;
        std::cout << "You WIN! +" << winnings << "\n";
    } else {
        std::cout << "You lose. -" << bet << "\n";
    }

    return 0;
}


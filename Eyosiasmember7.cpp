//  Member 7 — Generate Winner and Handle Result

int randomNumber = dist(gen);
std::cout << "Winning number was: " << randomNumber << "\n";

capital -= bet; // Subtract bet first

if (guess == randomNumber) {
    long long winnings = bet * 2;
    capital += winnings;
    std::cout << "You WIN! +" << winnings << "\n";
} else {
    std::cout << "You lose. -" << bet << "\n";
}

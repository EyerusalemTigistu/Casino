#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

void playGame() {
    int randomNumber, playerGuess, attempts = 5, score = 0;
    srand(time(0)); // Seed for random number generation
    randomNumber = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Welcome to the Casino Number Guessing Game!\n";
    cout << "You have " << attempts << " attempts to guess the number (1-100).\n";

    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> playerGuess;

        if (playerGuess == randomNumber) {
            cout << "Congratulations! You guessed the correct number.\n";
            score += 10;
            break;
        } else if (playerGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Too low! Try again.\n";
        }

        attempts--;
        cout << "Attempts remaining: " << attempts << "\n";
    }

    if (attempts == 0) {
        cout << "Sorry, you've run out of attempts. The number was: " << randomNumber << "\n";
        score -= 5;
    }

    cout << "Your final score: " << score << "\n";
}

int main() {
    char playAgain;
    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing! Goodbye.\n";
    return 0;
}

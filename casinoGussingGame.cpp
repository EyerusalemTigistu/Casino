#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playGame() {
    srand(time(0)); // Seed for random number generation
    int num = rand() % 100 + 1 /* Random number between 1 and 100*/, guess, attempts = 5, score = 0;
    
	cout << "Welcome to the Casino Number Guessing Game!\n";
    cout << "Guess the number (1 â€“ 100), " << attempts << " tries:\n";
    
    // Loop while attempts remain, user inputs a number, and it's not correct
    while (attempts-- && cin >> guess && guess != num)
        cout << (guess > num ? "Too high!" : "Too low!") << " " << attempts << " left\n";
	
	// Assign score based on success or failure
    score = (guess == num) ? 10 : -5;
    
    // Assign score based on success or failure
    cout << (guess == num ? "Congratulations! You guessed the correct number.\n" : "Sorry, you've run out of attempts. The number was: " + to_string(num) + "\n");
    cout << "Your final score: " << score << "\n";
}

int main() {
    char r;
    
        // Loop the game while user chooses to play again
    do{
	playGame(), cout << "Do you want to play again? (y/n): ";}
	while (cin >> r && tolower(r) == 'y');
    cout << "Thank you for playing! Goodbye.\n";
}

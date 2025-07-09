#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Welcome to the casino game!\n";

    srand(time(0));

    int money;
    cout << "Enter your capital: ";
    cin >> money;

    int round = 1;
    char cont = 'y';

    while ((cont == 'y' || cont == 'Y') && money > 0) {
        cout << "\n--- Round " << round << " ---\n";
        cout << "Current money: " << money << "\n";

        int guess;
        cout << "Enter a number (1-50): ";
        cin >> guess;

        int bet;
        cout << "Enter betting money for this round: ";
        cin >> bet;

        int winning = rand() % 50 + 1;
        cout << "Winning number was: " << winning << "\n";

        if (guess == winning) {
            int winnings = bet * 2;
            money += winnings;
            cout << "You WIN! +" << winnings << "\n";
        } else {
            money -= bet;
            cout << "You lose. -" << bet << "\n";
        }

        if (money <= 0) {
            cout << "You're out of money. Game over—thank you for playing!\n";
            break;
        }

        cout << "Continue? (y/n): ";
        cin >> cont;
        ++round;
    }

    if (money > 0 && !(cont == 'y' || cont == 'Y'))
        cout << "Thank you for playing. You leave with " << money << "\n";

    return 0;
}

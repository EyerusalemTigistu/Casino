// ----- check funds -----
        if (money <= 0) {
            cout << "You're out of money. Game over—thank you for playing!\n";
            break;
        }

        // ----- continue? -----
        cout << "Continue? (y/n): ";
        cin >> cont;
        ++round;
    }
int capital{};
    std::cout << "Enter your capital: ";
    while (!(std::cin >> capital) || capital <= 0) {
        std::cout << "Please enter a positive amount: ";
        std::cin.>>bet();
        std::cin.>>bet(std::numeric_limits<std::streamsize>::max(), '\n');
    }

# Casino Guessing Game

## Overview

Welcome to a simple casino game made in C++! You start with some money and try to guess a number between 1 and 50.  
If you guess correctly, you win double your bet! If not, you lose the money you bet.  
You can keep playing until you run out of money or decide to stop.

## How to Play

1. When the game starts, it asks how much money you want to start with.
2. Each round:
   - You guess a number between 1 and 50.
   - You enter how much money you want to bet.
3. The game picks a random winning number between 1 and 50.
4. If your guess is correct, you win double your bet.
5. If your guess is wrong, you lose your bet.
6. If you still have money, you can choose to play again or stop.
7. If you run out of money, the game ends.

## Features

- Random number is generated fresh every round.
- You can win double your bet if you guess right.
- The game ends automatically when you're out of money or if you choose to quit.
- Easy to use, runs in the console.

## Notes

- The game uses `rand()` to generate a number between 1 and 50.
- It uses `srand(time(0))` to make the numbers random every time you run the game.
- Inputs are taken using the keyboard.
- The game continues until the player chooses to stop or loses all their money.
- Input validation is not included — be sure to enter valid numbers!

## to Run the Code  and game

Wright the folowing instruction in terminal:
   1. g++ main.cpp -o main.exe
   2. .\main.exe



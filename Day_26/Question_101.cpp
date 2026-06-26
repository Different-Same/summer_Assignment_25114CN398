// a program to Create number guessing game
// A program to Create Number Guessing Game
#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
    srand(time(0));

    int random = rand() % 100 + 1;
    int guess;

    std::cout << "Guess the number (1-100)\n";

    do
    {
        std::cout << "Enter your guess : ";
        std::cin >> guess;

        if(guess > random)
        {
            std::cout << "Too High!\n";
        }
        else if(guess < random)
        {
            std::cout << "Too Low!\n";
        }
        else
        {
            std::cout << "Congratulations! You guessed the number.\n";
        }

    }while(guess != random);

    return 0;
}
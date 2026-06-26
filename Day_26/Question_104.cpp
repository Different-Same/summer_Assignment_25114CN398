//  a program to Create quiz application.
// A program to Create Quiz Application
#include<iostream>

int main()
{
    int answer;
    int score = 0;

    std::cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    std::cout << "1. What is the capital of India?\n";
    std::cout << "1. Mumbai\n";
    std::cout << "2. New Delhi\n";
    std::cout << "3. Kolkata\n";
    std::cout << "Enter your answer : ";
    std::cin >> answer;

    if(answer == 2)
    {
        score++;
    }

    // Question 2
    std::cout << "\n2. How many days are there in a week?\n";
    std::cout << "1. 5\n";
    std::cout << "2. 6\n";
    std::cout << "3. 7\n";
    std::cout << "Enter your answer : ";
    std::cin >> answer;

    if(answer == 3)
    {
        score++;
    }

    // Question 3
    std::cout << "\n3. Which language is the best?\n";
    std::cout << "1. C++\n";
    std::cout << "2. Python\n";
    std::cout << "3. Java\n";
    std::cout << "Enter your answer : ";
    std::cin >> answer;

    if(answer == 1)
    {
        score++;
    }

    std::cout << "\n=========================\n";
    std::cout << "Your Score : " << score << "/3\n";

    if(score == 3)
    {
        std::cout << "Excellent!";
    }
    else if(score == 2)
    {
        std::cout << "Good Job!";
    }
    else if(score == 1)
    {
        std::cout << "Keep Practicing!";
    }
    else
    {
        std::cout << "Better Luck Next Time!";
    }

    return 0;
}
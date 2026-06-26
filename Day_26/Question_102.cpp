//  a program to Create voting eligibility system
// A program to Create Voting Eligibility System
#include<iostream>

int main()
{
    int age;

    std::cout << "Enter your age : ";
    std::cin >> age;

    if(age >= 18)
    {
        std::cout << "You are eligible to vote.";
    }
    else
    {
        std::cout << "You are not eligible to vote.";
    }

    return 0;
}
// a program to Create menu-driven calculator
#include<iostream>

int main()
{
    int choice;
    double num1, num2;

    do
    {
        std::cout << "\n===== Calculator Menu =====";
        std::cout << "\n1. Addition";
        std::cout << "\n2. Subtraction";
        std::cout << "\n3. Multiplication";
        std::cout << "\n4. Division";
        std::cout << "\n5. Exit";
        std::cout << "\nEnter your Choice : ";
        std::cin >> choice;

        if(choice >= 1 && choice <= 4)
        {
            std::cout << "Enter First Number : ";
            std::cin >> num1;

            std::cout << "Enter Second Number : ";
            std::cin >> num2;
        }

        switch(choice)
        {
            case 1:
                std::cout << "Result = " << num1 + num2;
                break;

            case 2:
                std::cout << "Result = " << num1 - num2;
                break;

            case 3:
                std::cout << "Result = " << num1 * num2;
                break;

            case 4:
                if(num2 == 0)
                {
                    std::cout << "Division by Zero is not Possible";
                }
                else
                {
                    std::cout << "Result = " << num1 / num2;
                }
                break;

            case 5:
                std::cout << "Exiting Calculator...";
                break;

            default:
                std::cout << "Invalid Choice";
        }

    } while(choice != 5);

    return 0;
}
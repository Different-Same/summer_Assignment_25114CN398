// a program to Create ATM simulation
// A program to Create ATM Simulation
#include<iostream>

int main()
{
    int choice;
    float balance = 10000, amount;

    do
    {
        std::cout << "\n===== ATM MENU =====\n";
        std::cout << "1. Check Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                std::cout << "Current Balance : " << balance << '\n';
                break;

            case 2:
                std::cout << "Enter amount to deposit : ";
                std::cin >> amount;
                balance += amount;
                std::cout << "Money deposited successfully.\n";
                break;

            case 3:
                std::cout << "Enter amount to withdraw : ";
                std::cin >> amount;

                if(amount <= balance)
                {
                    balance -= amount;
                    std::cout << "Please collect your cash.\n";
                }
                else
                {
                    std::cout << "Insufficient Balance!\n";
                }
                break;

            case 4:
                std::cout << "Thank you for using the ATM.\n";
                break;

            default:
                std::cout << "Invalid Choice!\n";
        }

    }while(choice != 4);

    return 0;
}
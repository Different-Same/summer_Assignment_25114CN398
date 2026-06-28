// a program to Create bank account system
#include<iostream>

struct account
{
    int account_number;
    std::string account_holder;
    float balance;
};

void add_account(account array[], int &size, int change);
void display_account(account array[], int size);
void deposit(account array[], int size);
void withdraw(account array[], int size);
void search_account(account array[], int size);

int main()
{
    account array[100];
    int size = 0;
    int choice, change;

    do
    {
        std::cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        std::cout << "1. Add Account\n";
        std::cout << "2. Display Accounts\n";
        std::cout << "3. Deposit Money\n";
        std::cout << "4. Withdraw Money\n";
        std::cout << "5. Search Account\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                std::cout << "How many accounts do you want to add : ";
                std::cin >> change;
                add_account(array, size, change);
                break;

            case 2:
                display_account(array, size);
                break;

            case 3:
                deposit(array, size);
                break;

            case 4:
                withdraw(array, size);
                break;

            case 5:
                search_account(array, size);
                break;

            case 6:
                std::cout << "Thank You!\n";
                break;

            default:
                std::cout << "Invalid Choice!\n";
        }

    }while(choice != 6);

    return 0;
}

void add_account(account array[], int &size, int change)
{
    for(int i = size; i < size + change; i++)
    {
        std::cout << "Enter Account Number : ";
        std::cin >> array[i].account_number;

        std::cout << "Enter Account Holder Name : ";
        std::cin >> array[i].account_holder;

        std::cout << "Enter Initial Balance : ";
        std::cin >> array[i].balance;

        std::cout << "*************************\n";
    }

    size += change;
}

void display_account(account array[], int size)
{
    if(size == 0)
    {
        std::cout << "No Accounts Found!\n";
        return;
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << "\nAccount Number : " << array[i].account_number << "\n";
        std::cout << "Account Holder : " << array[i].account_holder << "\n";
        std::cout << "Balance : " << array[i].balance << "\n";
        std::cout << "*************************\n";
    }
}

void deposit(account array[], int size)
{
    int number;
    float amount;

    std::cout << "Enter Account Number : ";
    std::cin >> number;

    for(int i = 0; i < size; i++)
    {
        if(array[i].account_number == number)
        {
            std::cout << "Enter Deposit Amount : ";
            std::cin >> amount;

            array[i].balance += amount;

            std::cout << "Money Deposited Successfully!\n";
            return;
        }
    }

    std::cout << "Account Not Found!\n";
}

void withdraw(account array[], int size)
{
    int number;
    float amount;

    std::cout << "Enter Account Number : ";
    std::cin >> number;

    for(int i = 0; i < size; i++)
    {
        if(array[i].account_number == number)
        {
            std::cout << "Enter Withdraw Amount : ";
            std::cin >> amount;

            if(amount <= array[i].balance)
            {
                array[i].balance -= amount;
                std::cout << "Withdrawal Successful!\n";
            }
            else
            {
                std::cout << "Insufficient Balance!\n";
            }

            return;
        }
    }

    std::cout << "Account Not Found!\n";
}

void search_account(account array[], int size)
{
    int number;

    std::cout << "Enter Account Number : ";
    std::cin >> number;

    for(int i = 0; i < size; i++)
    {
        if(array[i].account_number == number)
        {
            std::cout << "Account Found!\n";
            std::cout << "Account Holder : " << array[i].account_holder << "\n";
            std::cout << "Balance : " << array[i].balance << "\n";
            return;
        }
    }

    std::cout << "Account Not Found!\n";
}
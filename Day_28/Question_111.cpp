// a program to Create ticket booking system
#include<iostream>

struct ticket
{
    int ticket_id;
    std::string passenger_name;
    std::string destination;
    bool booked;
};

void add_ticket(ticket array[], int &size, int change);
void display_ticket(ticket array[], int size);
void book_ticket(ticket array[], int size);
void cancel_ticket(ticket array[], int size);
void search_ticket(ticket array[], int size);

int main()
{
    ticket array[100];
    int size = 0;
    int choice, change;

    do
    {
        std::cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        std::cout << "1. Add Ticket\n";
        std::cout << "2. Display Tickets\n";
        std::cout << "3. Book Ticket\n";
        std::cout << "4. Cancel Ticket\n";
        std::cout << "5. Search Ticket\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                std::cout << "How many tickets do you want to add : ";
                std::cin >> change;
                add_ticket(array, size, change);
                break;

            case 2:
                display_ticket(array, size);
                break;

            case 3:
                book_ticket(array, size);
                break;

            case 4:
                cancel_ticket(array, size);
                break;

            case 5:
                search_ticket(array, size);
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

void add_ticket(ticket array[], int &size, int change)
{
    for(int i = size; i < size + change; i++)
    {
        std::cout << "Enter Ticket ID : ";
        std::cin >> array[i].ticket_id;

        std::cout << "Enter Passenger Name : ";
        std::cin >> array[i].passenger_name;

        std::cout << "Enter Destination : ";
        std::cin >> array[i].destination;

        array[i].booked = false;

        std::cout << "*************************\n";
    }

    size += change;
}

void display_ticket(ticket array[], int size)
{
    if(size == 0)
    {
        std::cout << "No Tickets Found!\n";
        return;
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << "\nTicket ID : " << array[i].ticket_id << "\n";
        std::cout << "Passenger Name : " << array[i].passenger_name << "\n";
        std::cout << "Destination : " << array[i].destination << "\n";

        if(array[i].booked)
            std::cout << "Status : Booked\n";
        else
            std::cout << "Status : Available\n";

        std::cout << "*************************\n";
    }
}

void book_ticket(ticket array[], int size)
{
    int id;

    std::cout << "Enter Ticket ID : ";
    std::cin >> id;

    for(int i = 0; i < size; i++)
    {
        if(array[i].ticket_id == id)
        {
            if(!array[i].booked)
            {
                array[i].booked = true;
                std::cout << "Ticket Booked Successfully!\n";
            }
            else
            {
                std::cout << "Ticket Already Booked!\n";
            }
            return;
        }
    }

    std::cout << "Ticket Not Found!\n";
}

void cancel_ticket(ticket array[], int size)
{
    int id;

    std::cout << "Enter Ticket ID : ";
    std::cin >> id;

    for(int i = 0; i < size; i++)
    {
        if(array[i].ticket_id == id)
        {
            if(array[i].booked)
            {
                array[i].booked = false;
                std::cout << "Ticket Cancelled Successfully!\n";
            }
            else
            {
                std::cout << "Ticket is Already Available!\n";
            }
            return;
        }
    }

    std::cout << "Ticket Not Found!\n";
}

void search_ticket(ticket array[], int size)
{
    int id;

    std::cout << "Enter Ticket ID : ";
    std::cin >> id;

    for(int i = 0; i < size; i++)
    {
        if(array[i].ticket_id == id)
        {
            std::cout << "Ticket Found!\n";
            std::cout << "Passenger Name : " << array[i].passenger_name << "\n";
            std::cout << "Destination : " << array[i].destination << "\n";

            if(array[i].booked)
                std::cout << "Status : Booked\n";
            else
                std::cout << "Status : Available\n";

            return;
        }
    }

    std::cout << "Ticket Not Found!\n";
}
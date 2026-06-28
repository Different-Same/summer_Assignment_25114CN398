// a program to Create contact management system
#include<iostream>

struct contact
{
    int contact_id;
    std::string contact_name;
    std::string phone_number;
    std::string email;
};

void add_contact(contact array[], int &size, int change);
void display_contact(contact array[], int size);
void search_contact(contact array[], int size);
void update_contact(contact array[], int size);
void delete_contact(contact array[], int &size);

int main()
{
    contact array[100];
    int size = 0;
    int choice, change;

    do
    {
        std::cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Display Contacts\n";
        std::cout << "3. Search Contact\n";
        std::cout << "4. Update Contact\n";
        std::cout << "5. Delete Contact\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                std::cout << "How many contacts do you want to add : ";
                std::cin >> change;
                add_contact(array, size, change);
                break;

            case 2:
                display_contact(array, size);
                break;

            case 3:
                search_contact(array, size);
                break;

            case 4:
                update_contact(array, size);
                break;

            case 5:
                delete_contact(array, size);
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

void add_contact(contact array[], int &size, int change)
{
    for(int i = size; i < size + change; i++)
    {
        std::cout << "Enter Contact ID : ";
        std::cin >> array[i].contact_id;

        std::cout << "Enter Contact Name : ";
        std::cin >> array[i].contact_name;

        std::cout << "Enter Phone Number : ";
        std::cin >> array[i].phone_number;

        std::cout << "Enter Email : ";
        std::cin >> array[i].email;

        std::cout << "*************************\n";
    }

    size += change;
}

void display_contact(contact array[], int size)
{
    if(size == 0)
    {
        std::cout << "No Contacts Found!\n";
        return;
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << "\nContact ID : " << array[i].contact_id << "\n";
        std::cout << "Name : " << array[i].contact_name << "\n";
        std::cout << "Phone Number : " << array[i].phone_number << "\n";
        std::cout << "Email : " << array[i].email << "\n";
        std::cout << "*************************\n";
    }
}

void search_contact(contact array[], int size)
{
    int id;

    std::cout << "Enter Contact ID : ";
    std::cin >> id;

    for(int i = 0; i < size; i++)
    {
        if(array[i].contact_id == id)
        {
            std::cout << "Contact Found!\n";
            std::cout << "Name : " << array[i].contact_name << "\n";
            std::cout << "Phone Number : " << array[i].phone_number << "\n";
            std::cout << "Email : " << array[i].email << "\n";
            return;
        }
    }

    std::cout << "Contact Not Found!\n";
}

void update_contact(contact array[], int size)
{
    int id;

    std::cout << "Enter Contact ID : ";
    std::cin >> id;

    for(int i = 0; i < size; i++)
    {
        if(array[i].contact_id == id)
        {
            std::cout << "Enter New Name : ";
            std::cin >> array[i].contact_name;

            std::cout << "Enter New Phone Number : ";
            std::cin >> array[i].phone_number;

            std::cout << "Enter New Email : ";
            std::cin >> array[i].email;

            std::cout << "Contact Updated Successfully!\n";
            return;
        }
    }

    std::cout << "Contact Not Found!\n";
}

void delete_contact(contact array[], int &size)
{
    int id;

    std::cout << "Enter Contact ID : ";
    std::cin >> id;

    for(int i = 0; i < size; i++)
    {
        if(array[i].contact_id == id)
        {
            for(int j = i; j < size - 1; j++)
            {
                array[j] = array[j + 1];
            }

            size--;
            std::cout << "Contact Deleted Successfully!\n";
            return;
        }
    }

    std::cout << "Contact Not Found!\n";
}
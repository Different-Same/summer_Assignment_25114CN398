// a program to Create library management system
#include<iostream>

struct book
{
    int id;
    std::string title;
    std::string author;
    bool available;
};

void addbook(book library[], int &count);
void displaybook(book library[], int count);
void searchbook(book library[], int count);
void issuebook(book library[], int count);
void returnbook(book library[], int count);
void deletebook(book library[], int &count);

int main()
{
    book library[100];
    int count = 0;
    int choice;

    do
    {
        std::cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Display Books\n";
        std::cout << "3. Search Book\n";
        std::cout << "4. Issue Book\n";
        std::cout << "5. Return Book\n";
        std::cout << "6. Delete Book\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1: addbook(library, count); break;
            case 2: displaybook(library, count); break;
            case 3: searchbook(library, count); break;
            case 4: issuebook(library, count); break;
            case 5: returnbook(library, count); break;
            case 6: deletebook(library, count); break;
            case 7: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid Choice!\n";
        }

    }while(choice != 7);

    return 0;
}

void addbook(book library[], int &count)
{
    std::cout << "Enter Book ID : ";
    std::cin >> library[count].id;

    std::cin.ignore();

    std::cout << "Enter Book Title : ";
    std::getline(std::cin, library[count].title);

    std::cout << "Enter Author Name : ";
    std::getline(std::cin, library[count].author);

    library[count].available = true;
    count++;

    std::cout << "Book Added Successfully!\n";
}

void displaybook(book library[], int count)
{
    if(count == 0)
    {
        std::cout << "No Books Available!\n";
        return;
    }

    for(int i = 0; i < count; i++)
    {
        std::cout << "\nBook " << i + 1 << "\n";
        std::cout << "ID : " << library[i].id << "\n";
        std::cout << "Title : " << library[i].title << "\n";
        std::cout << "Author : " << library[i].author << "\n";

        if(library[i].available)
            std::cout << "Status : Available\n";
        else
            std::cout << "Status : Issued\n";
    }
}

void searchbook(book library[], int count)
{
    int id;
    std::cout << "Enter Book ID : ";
    std::cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(library[i].id == id)
        {
            std::cout << "Book Found!\n";
            std::cout << "Title : " << library[i].title << "\n";
            std::cout << "Author : " << library[i].author << "\n";

            if(library[i].available)
                std::cout << "Status : Available\n";
            else
                std::cout << "Status : Issued\n";

            return;
        }
    }

    std::cout << "Book Not Found!\n";
}

void issuebook(book library[], int count)
{
    int id;
    std::cout << "Enter Book ID : ";
    std::cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(library[i].id == id)
        {
            if(library[i].available)
            {
                library[i].available = false;
                std::cout << "Book Issued Successfully!\n";
            }
            else
            {
                std::cout << "Book Already Issued!\n";
            }
            return;
        }
    }

    std::cout << "Book Not Found!\n";
}

void returnbook(book library[], int count)
{
    int id;
    std::cout << "Enter Book ID : ";
    std::cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(library[i].id == id)
        {
            if(!library[i].available)
            {
                library[i].available = true;
                std::cout << "Book Returned Successfully!\n";
            }
            else
            {
                std::cout << "Book is Already Available!\n";
            }
            return;
        }
    }

    std::cout << "Book Not Found!\n";
}

void deletebook(book library[], int &count)
{
    int id;
    std::cout << "Enter Book ID : ";
    std::cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(library[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                library[j] = library[j + 1];
            }

            count--;
            std::cout << "Book Deleted Successfully!\n";
            return;
        }
    }

    std::cout << "Book Not Found!\n";
}
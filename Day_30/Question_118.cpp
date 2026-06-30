// a program to Create mini library system
#include<iostream>
#include <limits>
std::string book_name[20];
std::string book_author[20];
int book_id[20];
bool book_available[20];

void addbook(int time,int &current_size);
void displaybook(int current_size);
void searchbook(int target,int current_size);
void updatebook(int target,int current_size);
void deletebook(int target,int &current_size);

int main()
{
    int current_size=0;
    int choice;
    do{
        std::cout << " ********** " << "Library Managment System "<<"**********\n";
        std::cout << "1) Add Book \n";
        std::cout << "2) Display Book \n";
        std::cout << "3) Search Book \n";
        std::cout << "4) Update Book \n";
        std::cout << "5) Delete Book \n";
        std::cout << "6) Exit \n";
        std::cin >> choice;
        switch(choice)
        {
            case 1:
            {
            int times;
            std::cout <<"Enter the Number of book you want to add :";
            std::cin >> times;
            addbook(times,current_size);
            break;
            }
            case 2:
            {
                displaybook(current_size);
                break;
            }
            case 3:
            {
                int target;
                std::cout << "Enter the book id you want to search :";
                std::cin >> target;
                searchbook(target,current_size);
                break;
            }
            case 4:
            {
                int target;
                std::cout << "Enter the book id you want to update :";
                std::cin >> target;
                updatebook(target,current_size);
                break;
            }
            case 5:
            {
                int target;
                std::cout << "Enter the book number you want to delete:";
                std::cin >> target;
                deletebook(target,current_size);
                break;
            }
            case 6:
            {
                std::cout << "Program Ended \n";
                break;
            }
            default :
            {
                std::cout <<"Select something in range \n";
            }
        }
    } while(choice!=6);

}

void addbook(int time,int &current_size)
{
    if(current_size+time<=20)
    {
    for(int i=current_size;i<current_size+time;i++)
    {
        std::cout << "Enter the Book Name :";
        std::cin.ignore();
        std::getline(std::cin,book_name[i]);
        std::cout << "Enter the Book Author :";
        std::getline(std::cin,book_author[i]);
        std::cout << "Enter the Book Id :";
        std::cin >> book_id[i];
        std::cout << "Enter the Book Availability[1=True/0=False] :";
        std::cin >> book_available[i];
        std::cout << "***************\n";
        std::cout << "***************\n";
    }
    current_size+=time;
}
else{
    std::cout << "Insufficient Space \n";
}
}

void displaybook(int current_size)
{
    for(int i=0;i<current_size;i++)
    {
        std::cout << "******* " << "Book " << i + 1<< " *******\n";
        std::cout << "The Book Name :" << book_name[i] << '\n'; 
        std::cout << "The Book Author :" << book_author[i] << '\n';;
        std::cout << "The Book Id :" << book_id[i] << '\n';;
        std::cout << "The Book Availibility :" << book_available[i] << '\n';;
        std::cout << "***************\n";
        std::cout << "***************\n";
    }
}

void searchbook(int target,int current_size)
{
    bool found=false;
    int id;
    for(int i=0;i<current_size;i++)
    {
        if(target==book_id[i])
        {
            found=true;
            id=i;
            break;
        }
    }
    if(!found)
    {
        std::cout << "Book Not found ";
        return;
    }
    std::cout << "The Book Name :" << book_name[id]; 
    std::cout << "The Book Author :" << book_author[id];
    std::cout << "The Book Id :" << book_id[id];
    std::cout << "The Book Availibility :" << book_available[id];
}

void updatebook(int target,int current_size)
{

    bool found=false;
    int id;
    for(int i=0;i<current_size;i++)
    {
        if(target==book_id[i])
        {
            found=true;
            id=i;
        }
    }
    if(!found)
    {
        std:: cout << "Book not Found";
        return;
    }
    std::cout << "Enter the Book Name :";
    std::cin.ignore();
    std::getline(std::cin,book_name[id]);
    std::cout << "Enter the Book Author :";
    std::getline(std::cin,book_author[id]);
    std::cout << "Enter the Book Id :";
    std::cin >> book_id[id];
    std::cout << "Enter the Book Availability[1=True/0=False] :";
    std::cin >> book_available[id];
}

void deletebook(int target,int &current_size)
{
     if(target>=1 && target <= current_size)
    {
    for(int i=target-1;i<current_size-1;i++)
    {
        book_name[i]=book_name[i+1];
        book_author[i]=book_author[i+1];
        book_id[i]=book_id[i+1];
        book_available[i]=book_available[i+1];
    }
    current_size--;
   }
   else{
    std::cout << "Invalid Book Number \n";
   }
}
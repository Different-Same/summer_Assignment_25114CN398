// Student Record Management System
#include<iostream>
#include<string>

struct student
{
    std::string student_name;
    int student_age;
    std::string student_gender;
    int student_roll_number;
    char student_grade;
};

void addstudent(student parray[], int &size, int capacity, int time);
void displaystudent(student parray[], int size);
void searchstudent(student parray[], int size);
void updatestudent(student parray[], int size);
void deletestudent(student parray[], int &size);

int main()
{
    int capacity;
    std::cout << "Enter Maximum Number of Students : ";
    std::cin >> capacity;

    student* parray = new student[capacity];

    int size = 0;
    int choice;

    do
    {
        std::cout << "\n========== Student Record Management ==========\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Search Student\n";
        std::cout << "4. Update Student\n";
        std::cout << "5. Delete Student\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int time;
                std::cout << "How Many Students : ";
                std::cin >> time;
                addstudent(parray,size,capacity,time);
                break;
            }

            case 2:
                displaystudent(parray,size);
                break;

            case 3:
                searchstudent(parray,size);
                break;

            case 4:
                updatestudent(parray,size);
                break;

            case 5:
                deletestudent(parray,size);
                break;

            case 6:
                std::cout << "Program Ended.\n";
                break;

            default:
                std::cout << "Invalid Choice!\n";
        }

    }while(choice!=6);

    delete[] parray;

    return 0;
}

void addstudent(student parray[], int &size, int capacity, int time)
{
    if(size + time > capacity)
    {
        std::cout << "Not Enough Space!\n";
        return;
    }

    std::cin.ignore();

    for(int i=size;i<size+time;i++)
    {
        std::cout << "\nStudent " << i+1 << "\n";

        std::cout << "Enter Student Name : ";
        std::getline(std::cin,parray[i].student_name);

        std::cout << "Enter Student Age : ";
        std::cin >> parray[i].student_age;

        std::cout << "Enter Student Gender : ";
        std::cin >> parray[i].student_gender;

        std::cout << "Enter Student Roll Number : ";
        std::cin >> parray[i].student_roll_number;

        std::cout << "Enter Student Grade : ";
        std::cin >> parray[i].student_grade;

        std::cin.ignore();
    }

    size += time;
}

void displaystudent(student parray[], int size)
{
    if(size==0)
    {
        std::cout << "No Student Record Found!\n";
        return;
    }

    for(int i=0;i<size;i++)
    {
        std::cout << "\n***************************\n";
        std::cout << "Student Number : " << i+1 << "\n";
        std::cout << "Student Name : " << parray[i].student_name << "\n";
        std::cout << "Student Age : " << parray[i].student_age << "\n";
        std::cout << "Student Gender : " << parray[i].student_gender << "\n";
        std::cout << "Student Roll Number : " << parray[i].student_roll_number << "\n";
        std::cout << "Student Grade : " << parray[i].student_grade << "\n";
        std::cout << "***************************\n";
    }
}

void searchstudent(student parray[], int size)
{
    int target;
    bool found=false;

    std::cout << "Enter Roll Number : ";
    std::cin >> target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].student_roll_number==target)
        {
            found=true;

            std::cout << "\nStudent Found!\n";
            std::cout << "Student Name : " << parray[i].student_name << "\n";
            std::cout << "Student Age : " << parray[i].student_age << "\n";
            std::cout << "Student Gender : " << parray[i].student_gender << "\n";
            std::cout << "Student Roll Number : " << parray[i].student_roll_number << "\n";
            std::cout << "Student Grade : " << parray[i].student_grade << "\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout << "Student Not Found!\n";
    }
}

void updatestudent(student parray[], int size)
{
    int target;
    bool found=false;

    std::cout << "Enter Roll Number : ";
    std::cin >> target;

    std::cin.ignore();

    for(int i=0;i<size;i++)
    {
        if(parray[i].student_roll_number==target)
        {
            found=true;

            std::cout << "Enter New Student Name : ";
            std::getline(std::cin,parray[i].student_name);

            std::cout << "Enter New Student Age : ";
            std::cin >> parray[i].student_age;

            std::cout << "Enter New Student Gender : ";
            std::cin >> parray[i].student_gender;

            std::cout << "Enter New Student Grade : ";
            std::cin >> parray[i].student_grade;

            std::cout << "Record Updated!\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout << "Student Not Found!\n";
    }
}

void deletestudent(student parray[], int &size)
{
    int target;
    bool found=false;

    std::cout << "Enter Roll Number : ";
    std::cin >> target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].student_roll_number==target)
        {
            found=true;

            for(int j=i;j<size-1;j++)
            {
                parray[j]=parray[j+1];
            }

            size--;

            std::cout << "Student Deleted!\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout << "Student Not Found!\n";
    }
}
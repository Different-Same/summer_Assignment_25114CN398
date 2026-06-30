// to Create student record system using arrays and strings
#include<iostream>
#include <limits>
std::string student_name[20];
int student_age[20];
char student_gender[20];
int student_roll_number[20];
char student_grade[20];

void addstudent(int time,int &current_size);
void displaystudent(int current_size);
void searchstudent(int target,int current_size);
void updatestudent(int target,int current_size);
void deletestudent(int target,int &current_size);

int main()
{
    int current_size=0;
    int choice;
    do{
        std::cout << " ********** " << "Student Record System "<<"**********\n";
        std::cout << "1) Add Student \n";
        std::cout << "2) Display Student \n";
        std::cout << "3) Search Student \n";
        std::cout << "4) Update Student \n";
        std::cout << "5) Delete Student \n";
        std::cout << "6) Exit \n";
        std::cin >> choice;
        switch(choice)
        {
            case 1:
            {
            int times;
            std::cout <<"Enter the Number of student you want to add :";
            std::cin >> times;
            addstudent(times,current_size);
            break;
            }
            case 2:
            {
                displaystudent(current_size);
                break;
            }
            case 3:
            {
                int target;
                std::cout << "Enter the student number you want to search :";
                std::cin >> target;
                searchstudent(target,current_size);
                break;
            }
            case 4:
            {
                int target;
                std::cout << "Enter the Student Number you want to update :";
                std::cin >> target;
                updatestudent(target,current_size);
                break;
            }
            case 5:
            {
                int target;
                std::cout << "Enter the Student number you want to delete:";
                std::cin >> target;
                deletestudent(target,current_size);
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

void addstudent(int time,int &current_size)
{
    if(current_size+time<=20)
    {
    for(int k=0;k<time;k++)
    {
            std::cout << "Enter the Student Name :";
            std::cin.ignore();
            std::getline(std::cin,student_name[current_size+k]);
            std::cout << "Enter the Student Age :";
            std::cin >> student_age[current_size+k];
            std::cout << "Enter the Student Roll Number :";
            std::cin >> student_roll_number[current_size+k];
            std::cout << "Enter the Student Gender[M/F] :";
            std::cin >> student_gender[current_size+k];
            std::cout << "Enter the Student Grade[A,B,C,D,E,F] :";
            std::cin >> student_grade[current_size+k];
            std::cout << "*************************\n";
            std::cout << "*************************\n";
    }
    current_size+=time;
   }
   else{
    std::cout << "Insufficient Space \n";
   }
}

void displaystudent(int current_size)
{
    for(int i=0;i<current_size;i++)
    {
        std::cout<<"********** " << "Student " << i+1 << " **********\n";
        std::cout << "Student Name : " << student_name[i] <<'\n';
        std::cout << "Student Age : " << student_age[i] <<'\n';
        std::cout << "Student Roll Number : " << student_roll_number[i] <<'\n';
        std::cout << "Student Gender : " << student_gender[i] <<'\n';
        std::cout << "Student Grade : " << student_grade[i] <<'\n';
        std::cout << "*************************\n";
        std::cout << "*************************\n";
    }
}

void searchstudent(int target,int current_size)
{
    if(target>=1 && target < current_size)
    {
    std::cout << "Student Name : " << student_name[target-1] <<'\n';
    std::cout << "Student Age : " << student_age[target-1] <<'\n';
    std::cout << "Student Roll Number : " << student_roll_number[target-1] <<'\n';
    std::cout << "Student Gender : " << student_gender[target -1] <<'\n';
    std::cout << "Student Grade : " << student_grade[target-1] <<'\n';
    }
    else{
        std::cout << "Invalid Student Number \n";
    }
}

void updatestudent(int target, int current_size)
{
    if(target>=1 && target < current_size)
    {
    std::cout << "Enter the Student Name :";
    std::cin.ignore();
    std::getline(std::cin,student_name[target-1]);
    std::cout << "Enter the Student Age :";
    std::cin >> student_age[target-1];
    std::cout << "Enter the Student Roll Number :";
    std::cin >> student_roll_number[target-1];
    std::cout << "Enter the Student Gender :";
    std::cin >> student_gender[target-1];
    std::cout << "Enter the Student Grade :";
    std::cin >> student_grade[target-1];
    }
    else{
        std::cout << "Invalid Student Number\n";
    }
}

void deletestudent(int target,int &current_size)
{
    if(target>=1 && target <= current_size)
    {
    for(int i=target-1;i<current_size-1;i++)
    {
        student_name[i]=student_name[i+1];
        student_age[i]=student_age[i+1];
        student_roll_number[i]=student_roll_number[i+1];
        student_gender[i]=student_gender[i+1];
        student_grade[i]=student_grade[i+1];
    }
    current_size--;
   }
   else{
    std::cout << "Invalid Student Number \n";
   }
}
// Marksheet Generation System
#include<iostream>
#include<string>

struct student
{
    std::string student_name;
    int roll_number;

    float subject1;
    float subject2;
    float subject3;
    float subject4;
    float subject5;

    float total;
    float percentage;
    char grade;
};

void addstudent(student parray[],int &size,int capacity,int time);
void displaystudent(student parray[],int size);
void searchstudent(student parray[],int size);
void updatestudent(student parray[],int size);
void deletestudent(student parray[],int &size);

int main()
{
    int capacity;
    std::cout<<"Enter Maximum Students : ";
    std::cin>>capacity;

    student* parray=new student[capacity];

    int size=0;
    int choice;

    do
    {
        std::cout<<"\n========== Marksheet Generation ==========\n";
        std::cout<<"1.Add Student\n";
        std::cout<<"2.Display Marksheet\n";
        std::cout<<"3.Search Student\n";
        std::cout<<"4.Update Marks\n";
        std::cout<<"5.Delete Student\n";
        std::cout<<"6.Exit\n";

        std::cout<<"Enter Choice : ";
        std::cin>>choice;

        switch(choice)
        {
            case 1:
            {
                int time;
                std::cout<<"How Many Students : ";
                std::cin>>time;

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
        }

    }while(choice!=6);

    delete[] parray;
}

void addstudent(student parray[],int &size,int capacity,int time)
{
    if(size+time>capacity)
    {
        std::cout<<"Not Enough Space!\n";
        return;
    }

    std::cin.ignore();

    for(int i=size;i<size+time;i++)
    {
        std::cout<<"Student Name : ";
        std::getline(std::cin,parray[i].student_name);

        std::cout<<"Roll Number : ";
        std::cin>>parray[i].roll_number;

        std::cout<<"Subject 1 : ";
        std::cin>>parray[i].subject1;

        std::cout<<"Subject 2 : ";
        std::cin>>parray[i].subject2;

        std::cout<<"Subject 3 : ";
        std::cin>>parray[i].subject3;

        std::cout<<"Subject 4 : ";
        std::cin>>parray[i].subject4;

        std::cout<<"Subject 5 : ";
        std::cin>>parray[i].subject5;

        parray[i].total=
        parray[i].subject1+
        parray[i].subject2+
        parray[i].subject3+
        parray[i].subject4+
        parray[i].subject5;

        parray[i].percentage=parray[i].total/5;

        if(parray[i].percentage>=90)
            parray[i].grade='A';
        else if(parray[i].percentage>=75)
            parray[i].grade='B';
        else if(parray[i].percentage>=60)
            parray[i].grade='C';
        else if(parray[i].percentage>=40)
            parray[i].grade='D';
        else
            parray[i].grade='F';

        std::cin.ignore();
    }

    size+=time;
}

void displaystudent(student parray[],int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<"\n=============================\n";
        std::cout<<"Name : "<<parray[i].student_name<<"\n";
        std::cout<<"Roll : "<<parray[i].roll_number<<"\n";
        std::cout<<"Total : "<<parray[i].total<<"\n";
        std::cout<<"Percentage : "<<parray[i].percentage<<"\n";
        std::cout<<"Grade : "<<parray[i].grade<<"\n";
        std::cout<<"=============================\n";
    }
}

void searchstudent(student parray[],int size)
{
    int target;

    std::cout<<"Enter Roll Number : ";
    std::cin>>target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].roll_number==target)
        {
            std::cout<<"Name : "<<parray[i].student_name<<"\n";
            std::cout<<"Total : "<<parray[i].total<<"\n";
            std::cout<<"Percentage : "<<parray[i].percentage<<"\n";
            std::cout<<"Grade : "<<parray[i].grade<<"\n";
            return;
        }
    }

    std::cout<<"Student Not Found!\n";
}

void updatestudent(student parray[],int size)
{
    int target;

    std::cout<<"Enter Roll Number : ";
    std::cin>>target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].roll_number==target)
        {
            std::cout<<"Enter New Subject 1 : ";
            std::cin>>parray[i].subject1;

            std::cout<<"Enter New Subject 2 : ";
            std::cin>>parray[i].subject2;

            std::cout<<"Enter New Subject 3 : ";
            std::cin>>parray[i].subject3;

            std::cout<<"Enter New Subject 4 : ";
            std::cin>>parray[i].subject4;

            std::cout<<"Enter New Subject 5 : ";
            std::cin>>parray[i].subject5;

            parray[i].total=
            parray[i].subject1+
            parray[i].subject2+
            parray[i].subject3+
            parray[i].subject4+
            parray[i].subject5;

            parray[i].percentage=parray[i].total/5;

            if(parray[i].percentage>=90)
                parray[i].grade='A';
            else if(parray[i].percentage>=75)
                parray[i].grade='B';
            else if(parray[i].percentage>=60)
                parray[i].grade='C';
            else if(parray[i].percentage>=40)
                parray[i].grade='D';
            else
                parray[i].grade='F';

            return;
        }
    }

    std::cout<<"Student Not Found!\n";
}

void deletestudent(student parray[],int &size)
{
    int target;

    std::cout<<"Enter Roll Number : ";
    std::cin>>target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].roll_number==target)
        {
            for(int j=i;j<size-1;j++)
            {
                parray[j]=parray[j+1];
            }

            size--;

            std::cout<<"Student Deleted!\n";
            return;
        }
    }

    std::cout<<"Student Not Found!\n";
}
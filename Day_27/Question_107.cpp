// Salary Management System
#include<iostream>
#include<string>

struct salary
{
    std::string employee_name;
    int employee_id;
    std::string department;
    float basic_salary;
    float bonus;
    float deduction;
    float net_salary;
};

void addsalary(salary parray[], int &size, int capacity, int time);
void displaysalary(salary parray[], int size);
void searchsalary(salary parray[], int size);
void updatesalary(salary parray[], int size);
void deletesalary(salary parray[], int &size);

int main()
{
    int capacity;
    std::cout << "Enter Maximum Number of Employees : ";
    std::cin >> capacity;

    salary* parray = new salary[capacity];

    int size = 0;
    int choice;

    do
    {
        std::cout << "\n========== Salary Management ==========\n";
        std::cout << "1. Add Salary Record\n";
        std::cout << "2. Display Salary Records\n";
        std::cout << "3. Search Salary Record\n";
        std::cout << "4. Update Salary Record\n";
        std::cout << "5. Delete Salary Record\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int time;
                std::cout << "How Many Records : ";
                std::cin >> time;
                addsalary(parray,size,capacity,time);
                break;
            }

            case 2:
                displaysalary(parray,size);
                break;

            case 3:
                searchsalary(parray,size);
                break;

            case 4:
                updatesalary(parray,size);
                break;

            case 5:
                deletesalary(parray,size);
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

void addsalary(salary parray[], int &size, int capacity, int time)
{
    if(size + time > capacity)
    {
        std::cout << "Not Enough Space!\n";
        return;
    }

    std::cin.ignore();

    for(int i=size;i<size+time;i++)
    {
        std::cout << "\nEmployee " << i+1 << "\n";

        std::cout << "Employee Name : ";
        std::getline(std::cin,parray[i].employee_name);

        std::cout << "Employee ID : ";
        std::cin >> parray[i].employee_id;

        std::cout << "Department : ";
        std::cin >> parray[i].department;

        std::cout << "Basic Salary : ";
        std::cin >> parray[i].basic_salary;

        std::cout << "Bonus : ";
        std::cin >> parray[i].bonus;

        std::cout << "Deduction : ";
        std::cin >> parray[i].deduction;

        parray[i].net_salary =
        parray[i].basic_salary +
        parray[i].bonus -
        parray[i].deduction;

        std::cin.ignore();
    }

    size += time;
}

void displaysalary(salary parray[], int size)
{
    if(size==0)
    {
        std::cout<<"No Record Found!\n";
        return;
    }

    for(int i=0;i<size;i++)
    {
        std::cout<<"\n********************************\n";
        std::cout<<"Employee Name : "<<parray[i].employee_name<<"\n";
        std::cout<<"Employee ID : "<<parray[i].employee_id<<"\n";
        std::cout<<"Department : "<<parray[i].department<<"\n";
        std::cout<<"Basic Salary : "<<parray[i].basic_salary<<"\n";
        std::cout<<"Bonus : "<<parray[i].bonus<<"\n";
        std::cout<<"Deduction : "<<parray[i].deduction<<"\n";
        std::cout<<"Net Salary : "<<parray[i].net_salary<<"\n";
        std::cout<<"********************************\n";
    }
}

void searchsalary(salary parray[], int size)
{
    int target;
    bool found=false;

    std::cout<<"Enter Employee ID : ";
    std::cin>>target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].employee_id==target)
        {
            found=true;

            std::cout<<"Employee Name : "<<parray[i].employee_name<<"\n";
            std::cout<<"Department : "<<parray[i].department<<"\n";
            std::cout<<"Net Salary : "<<parray[i].net_salary<<"\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout<<"Record Not Found!\n";
    }
}

void updatesalary(salary parray[], int size)
{
    int target;
    bool found=false;

    std::cout<<"Enter Employee ID : ";
    std::cin>>target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].employee_id==target)
        {
            found=true;

            std::cout<<"Enter New Basic Salary : ";
            std::cin>>parray[i].basic_salary;

            std::cout<<"Enter New Bonus : ";
            std::cin>>parray[i].bonus;

            std::cout<<"Enter New Deduction : ";
            std::cin>>parray[i].deduction;

            parray[i].net_salary=
            parray[i].basic_salary+
            parray[i].bonus-
            parray[i].deduction;

            std::cout<<"Salary Updated!\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout<<"Record Not Found!\n";
    }
}

void deletesalary(salary parray[], int &size)
{
    int target;
    bool found=false;

    std::cout<<"Enter Employee ID : ";
    std::cin>>target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].employee_id==target)
        {
            found=true;

            for(int j=i;j<size-1;j++)
            {
                parray[j]=parray[j+1];
            }

            size--;

            std::cout<<"Record Deleted!\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout<<"Record Not Found!\n";
    }
}
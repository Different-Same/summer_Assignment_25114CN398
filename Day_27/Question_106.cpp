// Employee Management System
#include<iostream>
#include<string>

struct employee
{
    std::string employee_name;
    int employee_age;
    std::string employee_gender;
    int employee_id;
    std::string employee_department;
    float employee_salary;
};

void addemployee(employee parray[], int &size, int capacity, int time);
void displayemployee(employee parray[], int size);
void searchemployee(employee parray[], int size);
void updateemployee(employee parray[], int size);
void deleteemployee(employee parray[], int &size);

int main()
{
    int capacity;
    std::cout << "Enter Maximum Number of Employees : ";
    std::cin >> capacity;

    employee* parray = new employee[capacity];

    int size = 0;
    int choice;

    do
    {
        std::cout << "\n========== Employee Management ==========\n";
        std::cout << "1. Add Employee\n";
        std::cout << "2. Display Employees\n";
        std::cout << "3. Search Employee\n";
        std::cout << "4. Update Employee\n";
        std::cout << "5. Delete Employee\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int time;
                std::cout << "How Many Employees : ";
                std::cin >> time;
                addemployee(parray,size,capacity,time);
                break;
            }

            case 2:
                displayemployee(parray,size);
                break;

            case 3:
                searchemployee(parray,size);
                break;

            case 4:
                updateemployee(parray,size);
                break;

            case 5:
                deleteemployee(parray,size);
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

void addemployee(employee parray[], int &size, int capacity, int time)
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

        std::cout << "Enter Employee Name : ";
        std::getline(std::cin,parray[i].employee_name);

        std::cout << "Enter Employee Age : ";
        std::cin >> parray[i].employee_age;

        std::cout << "Enter Employee Gender : ";
        std::cin >> parray[i].employee_gender;

        std::cout << "Enter Employee ID : ";
        std::cin >> parray[i].employee_id;

        std::cout << "Enter Department : ";
        std::cin >> parray[i].employee_department;

        std::cout << "Enter Salary : ";
        std::cin >> parray[i].employee_salary;

        std::cin.ignore();
    }

    size += time;
}

void displayemployee(employee parray[], int size)
{
    if(size==0)
    {
        std::cout << "No Employee Record Found!\n";
        return;
    }

    for(int i=0;i<size;i++)
    {
        std::cout << "\n************************************\n";
        std::cout << "Employee Number : " << i+1 << "\n";
        std::cout << "Employee Name : " << parray[i].employee_name << "\n";
        std::cout << "Employee Age : " << parray[i].employee_age << "\n";
        std::cout << "Employee Gender : " << parray[i].employee_gender << "\n";
        std::cout << "Employee ID : " << parray[i].employee_id << "\n";
        std::cout << "Department : " << parray[i].employee_department << "\n";
        std::cout << "Salary : " << parray[i].employee_salary << "\n";
        std::cout << "************************************\n";
    }
}

void searchemployee(employee parray[], int size)
{
    int target;
    bool found=false;

    std::cout << "Enter Employee ID : ";
    std::cin >> target;

    for(int i=0;i<size;i++)
    {
        if(parray[i].employee_id==target)
        {
            found=true;

            std::cout << "\nEmployee Found!\n";
            std::cout << "Employee Name : " << parray[i].employee_name << "\n";
            std::cout << "Employee Age : " << parray[i].employee_age << "\n";
            std::cout << "Employee Gender : " << parray[i].employee_gender << "\n";
            std::cout << "Employee ID : " << parray[i].employee_id << "\n";
            std::cout << "Department : " << parray[i].employee_department << "\n";
            std::cout << "Salary : " << parray[i].employee_salary << "\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout << "Employee Not Found!\n";
    }
}

void updateemployee(employee parray[], int size)
{
    int target;
    bool found=false;

    std::cout << "Enter Employee ID : ";
    std::cin >> target;

    std::cin.ignore();

    for(int i=0;i<size;i++)
    {
        if(parray[i].employee_id==target)
        {
            found=true;

            std::cout << "Enter New Employee Name : ";
            std::getline(std::cin,parray[i].employee_name);

            std::cout << "Enter New Employee Age : ";
            std::cin >> parray[i].employee_age;

            std::cout << "Enter New Employee Gender : ";
            std::cin >> parray[i].employee_gender;

            std::cout << "Enter New Department : ";
            std::cin >> parray[i].employee_department;

            std::cout << "Enter New Salary : ";
            std::cin >> parray[i].employee_salary;

            std::cout << "Employee Updated Successfully!\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout << "Employee Not Found!\n";
    }
}

void deleteemployee(employee parray[], int &size)
{
    int target;
    bool found=false;

    std::cout << "Enter Employee ID : ";
    std::cin >> target;

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

            std::cout << "Employee Deleted Successfully!\n";

            break;
        }
    }

    if(found==false)
    {
        std::cout << "Employee Not Found!\n";
    }
}
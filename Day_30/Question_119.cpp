// a program to Create mini Employee system
#include<iostream>
#include <limits>
std::string Employee_name[20];
std::string Employee_department[20];
int Employee_id[20];
int Employee_age[20];
float Employee_salary[20];

void addEmployee(int time,int &current_size);
void displayEmployee(int current_size);
void searchEmployee(int target,int current_size);
void updateEmployee(int target,int current_size);
void deleteEmployee(int target,int &current_size);

int main()
{
    int current_size=0;
    int choice;
    do{
        std::cout << " ********** " << "Employee Managment System "<<"**********\n";
        std::cout << "1) Add Employee \n";
        std::cout << "2) Display Employee \n";
        std::cout << "3) Search Employee \n";
        std::cout << "4) Update Employee \n";
        std::cout << "5) Delete Employee \n";
        std::cout << "6) Exit \n";
        std::cin >> choice;
        switch(choice)
        {
            case 1:
            {
            int times;
            std::cout <<"Enter the Number of Employee you want to add :";
            std::cin >> times;
            addEmployee(times,current_size);
            break;
            }
            case 2:
            {
                displayEmployee(current_size);
                break;
            }
            case 3:
            {
                int target;
                std::cout << "Enter the Employee id you want to search :";
                std::cin >> target;
                searchEmployee(target,current_size);
                break;
            }
            case 4:
            {
                int target;
                std::cout << "Enter the Employee id you want to update :";
                std::cin >> target;
                updateEmployee(target,current_size);
                break;
            }
            case 5:
            {
                int target;
                std::cout << "Enter the Employee number you want to delete:";
                std::cin >> target;
                deleteEmployee(target,current_size);
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

void addEmployee(int time,int &current_size)
{
    if(current_size+time<=20)
    {
    for(int i=current_size;i<current_size+time;i++)
    {
        std::cout << "Enter the Employee Name :";
        std::cin.ignore();
        std::getline(std::cin,Employee_name[i]);
        std::cout << "Enter the Employee department :";
        std::getline(std::cin,Employee_department[i]);
        std::cout << "Enter the Employee Id :";
        std::cin >> Employee_id[i];
        std::cout << "Enter the Employee age :";
        std::cin >> Employee_age[i];
        std::cout << "Enter the Employee Salary :";
        std::cin >> Employee_salary[i];
        std::cout << "***************\n";
        std::cout << "***************\n";
    }
    current_size+=time;
}
else{
    std::cout << "Insufficient Space \n";
}
}

void displayEmployee(int current_size)
{
    for(int i=0;i<current_size;i++)
    {
        std::cout << "******* " << "Employee " << i + 1<< " *******\n";
        std::cout << "The Employee Name :" << Employee_name[i] << '\n'; 
        std::cout << "The Employee department :" << Employee_department[i] << '\n';
        std::cout << "The Employee Id :" << Employee_id[i] << '\n';
        std::cout << "The Employee Age :" << Employee_age[i] << '\n';
        std::cout << "The Employee Salary :"<< Employee_salary[i]<<'\n';
        std::cout << "***************\n";
        std::cout << "***************\n";
    }
}

void searchEmployee(int target,int current_size)
{
    bool found=false;
    int id;
    for(int i=0;i<current_size;i++)
    {
        if(target==Employee_id[i])
        {
            found=true;
            id=i;
            break;
        }
    }
    if(!found)
    {
        std::cout << "Employee Not found ";
        return;
    }
    std::cout << "The Employee Name :" << Employee_name[id] << '\n'; 
    std::cout << "The Employee department :" << Employee_department[id]<< '\n';
    std::cout << "The Employee Id :" << Employee_id[id]<< '\n';
    std::cout << "The Employee Age :" << Employee_age[id]<< '\n';
    std::cout << "The Employee Salary :"<< Employee_salary[id]<<'\n';
}

void updateEmployee(int target,int current_size)
{

    bool found=false;
    int id;
    for(int i=0;i<current_size;i++)
    {
        if(target==Employee_id[i])
        {
            found=true;
            id=i;
        }
    }
    if(!found)
    {
        std:: cout << "Employee not Found";
        return;
    }
    std::cout << "Enter the Employee Name :";
    std::cin.ignore();
    std::getline(std::cin,Employee_name[id]);
    std::cout << "Enter the Employee department :";
    std::getline(std::cin,Employee_department[id]);
    std::cout << "Enter the Employee Id :";
    std::cin >> Employee_id[id];
    std::cout << "Enter the Employee age :";
    std::cin >> Employee_age[id];
    std::cout << "Enter the Employee Salary :";
    std::cin >> Employee_salary[id];
}

void deleteEmployee(int target,int &current_size)
{
     if(target>=1 && target <= current_size)
    {
    for(int i=target-1;i<current_size-1;i++)
    {
        Employee_name[i]=Employee_name[i+1];
        Employee_department[i]=Employee_department[i+1];
        Employee_id[i]=Employee_id[i+1];
        Employee_age[i]=Employee_age[i+1];
        Employee_salary[i]=Employee_salary[i+1];
    }
    current_size--;
   }
   else{
    std::cout << "Invalid Employee Number \n";
   }
}
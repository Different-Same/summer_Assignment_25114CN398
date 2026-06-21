//to Find string length without strlen()
#include<iostream>
int main()
{
    int count=0;
    std::string name; 
    std::cout << "Enter the String : ";
    std::getline(std::cin,name);
    int i=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    std::cout << "The Length of "<< name << " :"<< count;
    return 0;
}
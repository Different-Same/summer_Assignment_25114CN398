// to sort name alphabetically
#include<iostream>

int main()
{
    int size;

    std::cout << "Enter Number of Names : ";
    std::cin >> size;

    std::cin.ignore();

    std::string* name = new std::string[size];

    std::cout << "Enter the Names :" << std::endl;

    for(int i = 0; i < size; i++)
    {
        std::getline(std::cin, name[i]);
    }

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(name[j] > name[j + 1])
            {
                std::string temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    std::cout << "\nNames in Alphabetical Order :" << std::endl;

    for(int i = 0; i < size; i++)
    {
        std::cout << name[i] << std::endl;
    }

    delete[] name;

    return 0;
}
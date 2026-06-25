// to sort word by length
#include<iostream>

int main()
{
    int size;

    std::cout << "Enter Number of Words : ";
    std::cin >> size;

    std::string* word = new std::string[size];

    std::cout << "Enter the Words :" << std::endl;

    for(int i = 0; i < size; i++)
    {
        std::cin >> word[i];
    }

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(word[j].length() > word[j + 1].length())
            {
                std::string temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }

    std::cout << "\nWords Sorted by Length :" << std::endl;

    for(int i = 0; i < size; i++)
    {
        std::cout << word[i] << " ";
    }

    delete[] word;

    return 0;
}
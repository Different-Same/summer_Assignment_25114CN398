// to find common character in string
#include<iostream>

int main()
{
    std::string word1, word2;

    std::cout << "Enter First String : ";
    std::getline(std::cin, word1);

    std::cout << "Enter Second String : ";
    std::getline(std::cin, word2);

    std::cout << "Common Characters : ";

    for(int i = 0; i < word1.length(); i++)
    {
        bool printed = false;

        // Check if already printed
        for(int k = 0; k < i; k++)
        {
            if(word1[i] == word1[k])
            {
                printed = true;
                break;
            }
        }

        if(printed)
        {
            continue;
        }

        for(int j = 0; j < word2.length(); j++)
        {
            if(word1[i] == word2[j])
            {
                std::cout << word1[i] << " ";
                break;
            }
        }
    }

    return 0;
}
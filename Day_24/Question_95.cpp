#include <iostream>
#include <string>

std::string longestword(const std::string& sentence);

int main()
{
    std::string sentence;

    std::cout << "Enter the Sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "The Longest word is: "
              << longestword(sentence);

    return 0;
}

std::string longestword(const std::string& sentence)
{
    std::string longest;
    std::string current;

    for(int i = 0; i <= sentence.length(); i++)
    {
        if(i == sentence.length() || sentence[i] == ' ')
        {
            if(current.length() > longest.length())
            {
                longest = current;
            }

            current.clear();
        }
        else
        {
            current += sentence[i];
        }
    }

    return longest;
}
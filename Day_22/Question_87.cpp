//  a program to Character frequency
#include<iostream>
#include<cctype>
int main()
{
    std::string sentence;
    char character;
    int size;
    std::cout << "Enter the Sentence :";
    std::getline(std::cin,sentence);
    std::cout << "Enter the character to check frequency :";
    std::cin >> character;
    size=sentence.length();
    int temp=0;
    for(int i=0; i < size;i++)
    {
        if(tolower(sentence[i])==character)
        {
            temp++;
        }
    }
    std::cout << "The Number of time "<< character << " appear : "<< temp;
    return 0;
} 

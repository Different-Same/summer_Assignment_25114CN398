// a program to Count vowels and consonant
#include<iostream>
#include<cstring>
#include<cctype>
int main()
{
    int vowel=0,consonant=0;
    std::string word;
    std::cout << "Enter the Word :";
    std::getline(std::cin,word);
    int size=word.length();
    for(int i=0;i<size;i++)
    {
        char charater=tolower(word[i]);
        if(charater=='a' || charater=='e' || charater=='i' || charater=='o' || charater=='u')
        {
            vowel++;
        }
        else if(charater==' ')
        {
            continue;
        }
        else if(std::isalpha(charater)){
            consonant++;
        }
    }
    std::cout << "The Number of Vowel and Consonant :"<<vowel << " and "<< consonant;
    return 0;
}
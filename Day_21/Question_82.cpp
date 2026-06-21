//a program to Reverse a string
#include<iostream>
#include<cstring>
int main()
{
    std::string word;
    std::string reverse;
    std::cout << "Enter the word :";
    std::getline(std::cin,word);
    for(int i = word.length()-1;i>=0;i--)
    {
        reverse+=word[i];
    }
    std::cout << reverse;
    return 0;
}
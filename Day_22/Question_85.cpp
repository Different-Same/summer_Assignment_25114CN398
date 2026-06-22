//  a program to Check palindrome string
#include<iostream>
#include<cstring>
int main()
{
    std::string word;
    std::cout << "Enter the word :";
    std::cin >> word;
    for(int i=word.length()-1;i>=0;i--)
    {
    
    if(word[i]!=word[word.length()-1-i])
    {
        std::cout << "It is not Palindrome string";
        return 0;
    }
    
   }
   std::cout << "it is Palindrome string";
    return 0;
}
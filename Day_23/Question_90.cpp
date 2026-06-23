// a program to Find first repeating character
#include<iostream>
void findnrw(std::string word);
int main()
{
    std::string Sentence;
    std::cout << "Enter the Sentence :";
    std::getline(std::cin, Sentence);
    findnrw(Sentence);
    return 0;
}
void findnrw(std::string word)
{
    for(int i=0;i < word.length();i++)
    {
        for(int j=i+1;j < word.length();j++)
        {
            if(word[i]==word[j])
            {
                std::cout << "The First repeating Character : "<< word[j];
                return;
            }
        }
    }
    std::cout <<"There is no repeating Character";
}
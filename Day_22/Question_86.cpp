//a program to Count words in a sentence
#include<iostream>
int main()
{
    int gap=1;
    std::string sentence;
    std::cout << "Enter the sentence :";
    std::getline(std::cin,sentence);
    int size=sentence.length();
    for(int i=0;i<size-1;i++)
    {
        if(sentence[i]==' ')
        {
            gap++;
        }
    }
    std::cout <<  "The total word in the sentence :"<< gap;
    return 0;
}
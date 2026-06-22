// a program to Remove spaces from string
#include<iostream>
int main()
{
    std::string sentence;
    std::cout << "Enter the Sentence :";
    std::getline(std::cin,sentence);
    int size= sentence.length();
    for(int i=0;i<size;i++)
    {
        if(sentence[i]==' ')
        {
            sentence.erase(i,1);
        }
    }
    std::cout << "The sentence without space : "<<sentence;
    return 0;
}

// to Convert lowercase to uppercase
#include<iostream>
int main()
{
    std::string word;
    std::cout<< "Enter the word :";
    std::getline(std::cin,word);
    int size=word.length();
    for(int i=0;i<size;i++)
    {
        char single=word[i];
        if(islower(single))
        {
            word[i]=toupper(single);
        }
    }
    std::cout << "The new word :" << word;
    return 0;
}

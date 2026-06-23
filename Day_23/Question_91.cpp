// to check for anagram strings
#include<iostream>
#include<cctype>
void compare(std::string word1,std::string word2);
int main()
{
    std::string Sentence1;
    std:: string Sentence2;
    std::cout << "Enter the Sentence1 :";
    std::getline(std::cin, Sentence1);
    std::cout << "Enter the Sentence2 :";
    std::getline(std::cin, Sentence2);
    compare(Sentence1, Sentence2);
    return 0;
}
void compare(std::string word1,std::string word2)
{
    std::string alpha="abcdefghijklmnopqrstuvwxyz";
    int array1[26]={0};
    int array2[26]={0};
    for(int i =0;i<word1.length();i++)
    {
        if( word1[i]==' ')
            {
                continue;
            }
        for(int j=0;j<26;j++)
        {
            if(tolower(word1[i])==alpha[j])
            {
                array1[j]++;
            }
        }  
    }
    for(int i =0;i<word2.length();i++)
    {
        if( word2[i]==' ')
            {
                continue;
            }
        for(int j=0;j<26;j++)
        {
            if(tolower(word2[i])==alpha[j])
            {
                array2[j]++;
            }
        }  
    }
    for(int k=0;k<26;k++)
    {
        if(array1[k]!=array2[k])
        {
            std::cout <<"They are not anagram string";
            return ;
        }
    }
    std::cout <<"They aer Anagram string";
}
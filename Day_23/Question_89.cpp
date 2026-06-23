//  to Find first non-repeating character
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
    std::string alpha="abcdefghijklmnopqrstuvwxyz";
    int array[26]={0};
    for(int i =0;i<word.length();i++)
    {
        if( word[i]==' ')
            {
                continue;
            }
        for(int j=0;j<26;j++)
        {
            if(word[i]==alpha[j])
            {
                array[j]++;
            }
        }  
    }
    for(int k=0;k<word.length();k++)
    {
        if(word[k]==' ')
        {
            continue;
        }
        else if(array[word[k]-'a']==1)
        {
            std:: cout << "The First Non-Repeating Character : "<< word[k];
            return;
        }
       
    }
    std::cout <<"There is no non-repeating Character";
}
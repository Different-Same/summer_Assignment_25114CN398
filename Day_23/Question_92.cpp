//a program to Find maximum occurring character
#include<iostream>
void findmax(std::string word);
int main()
{
    std::string Sentence;
    std::cout << "Enter the Sentence :";
    std::getline(std::cin, Sentence);
    findmax(Sentence);
    return 0;
}
void findmax(std::string word)
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
            if(tolower(word[i])==alpha[j])
            {
                array[j]++;
            }
        }  
    }
    int max=array[0];
    for(int l=1;l<26;l++)
    {
        if(max<array[l])
        {
            max=array[l];
        }   
    }
    if(max==0){
         std::cout <<"There is no occuring Character";
         return;
    }
    for(int k=0;k<word.length();k++)
    {
        if(word[k]==' ')
        {
            continue;
        }
        else if(array[word[k]-'a']==max)
        {
            std:: cout << "The Maximum Occuring character : "<< word[k];
            return;
        }
    }
}
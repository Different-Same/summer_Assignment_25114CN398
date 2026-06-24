//a program to remove duplicate character
#include<iostream>
void removeduplicate(std::string &name);
int main()
{
    std::string word;
    std::cout<< "Enter the word :";
    std::cin >> word;
    removeduplicate(word);
    std::cout << "The Compressed string : " << word;
    return 0;

}
void removeduplicate(std::string &name)
{
    int k=0;
    for(int i=0;i<name.length();i++)
    {
        bool found=false;
        for(int j=0;j<k;j++)
        {
            if(name[i]==name[j])
            {
                found=true;
                break;
            }
        }
         if(!found)
            {
                name[k]=name[i];
                k++;
            }
    }
    name.resize(k);
}
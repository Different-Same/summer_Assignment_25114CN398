// a program to compress a string
#include<iostream>
void compressstring(std::string& name);
int main()
{
    std::string word;
    std::cout << "Enter the word :";
    std::cin >> word;
    compressstring(word);
    return 0;
}
void compressstring(std::string& name)
{
    int i=0;
    while(i<name.length())
    {
        int count=1;
        while(i+1<name.length() && name[i]==name[i+1])
        {
            count++;
            i++;
        }
        std::cout << name[i]<<count;
        i++;
    }
}
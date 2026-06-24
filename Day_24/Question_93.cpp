//  a program to Check string rotation
#include<iostream>
void rotation(std::string& name,std::string& type,int time);
int main()
{
    std::string type;
    std::string word;
    int time;
    std::cout << "Enter the Word :";
    std::cin >> word;
    std::cout << "Enter the rotation type(left or right): ";
    std::cin >>type;
    std::cout << "Enter the times of rotation :";
    std::cin >> time;
    if(time < word.length())
    {
        time%=word.length();
    }
    rotation(word,type,time);
    std::cout <<"The Rotated word :" << word;
    return 0;
}
void rotation(std::string& name,std::string& type,int time)
{
    if( type=="left" || type=="Left")
    {
      for(int j=0;j<time;j++)
      {
        for(int i=0;i<name.length()-1;i++)
        {
            std::swap(name[i],name[i+1]);
        }
      }
    }
    else if(type=="Right"|| type=="right")
    {
      for(int i=0;i<time;i++)
      {
        for(int j=name.length()-1;j>0;j--)
        {
            std::swap(name[j],name[j-1]);
        }
      }
    }
}
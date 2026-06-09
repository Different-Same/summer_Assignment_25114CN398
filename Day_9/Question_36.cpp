// to Print hollow square pattern
#include<iostream>
int main()
{
    int side;
    std::cout<< "Enter the side of Hollow Square:";
    std::cin >> side;
  
    for(int i=1;i<=side;i++)
    {
        if(i==1 || i==side)
        {for(int k=0;k<side;k++)
    {
        std::cout<< "*";
    }
            std::cout<< '\n';
        }
        else
    {
        for(int j=1;j<=side;j++)
        {
        if(j==1 || j==side)
        {std:: cout << "*";}
        else
         {
            std::cout << " ";
         }
        }
         std::cout << "\n";
       }
    }
    return 0;
}
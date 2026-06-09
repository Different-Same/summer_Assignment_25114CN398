// to Print reverse star pattern
#include<iostream>
int main()
{
    int rownum;
    char symbol;
    std::cout << "Enter the Symbol you want to display:";
    std::cin >> symbol;
    std::cout << "Enter the Number of Row for star:";
    std::cin >> rownum;
    for(int i =rownum;i>0;i--)
    {for(int j=i;j>0;j--)
    {
        std::cout << symbol;
    }
    std::cout << '\n';}
    return 0;
}
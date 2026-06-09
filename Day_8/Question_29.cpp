// To Print half pyramid pattern
#include<iostream>
int main()
{
    int rownum;
    char symbol;
    std::cout << "Enter the Symbol:";
    std::cin >> symbol;
    std::cout << "Enter the number of rows:";
    std:: cin >> rownum;
    for(int i=1;i<=rownum;i++)
    {
        for(int j=0;j<i;j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    return 0;
}
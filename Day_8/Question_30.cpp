// to Print number triangle
#include<iostream>
int main()
{
    int rownum;
    std::cout << "Enter the Number of Rows:";
    std:: cin >> rownum;
    for(int i=1;i<=rownum;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout << j;
        }
        std::cout << '\n';
    }
    return 0;
}
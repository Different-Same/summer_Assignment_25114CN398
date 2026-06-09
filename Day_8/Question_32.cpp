// to Print repeated-number
#include<iostream>
int main()
{
    int rownum;
    std::cout << "Enter the Number of Rows:";
    std:: cin >> rownum;
    for(int i=1;i<=rownum;i++)
    {
        for(int j=0;j<i;j++)
        {
            std::cout << i;
        }
        std::cout << '\n';
    }
    return 0;
}
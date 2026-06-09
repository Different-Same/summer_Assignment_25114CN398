// to Print repeated character pattern
#include<iostream>
int main()
{
    int rownum;
    std::cout << "Enter the Number of Row you want to disaply:";
    std:: cin >> rownum;
    for(int i=1;i<=rownum;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char num=(int)64+i;
            std::cout << num;
        }
        std::cout << '\n';
    }
    return 0;
}
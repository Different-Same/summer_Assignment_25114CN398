//to Print reverse number 
#include<iostream>
int main()
{
    int rownum;
    std::cout << "Enter the Number of Rows to be Disaplyed:";
    std::cin >> rownum;
    for(int i=rownum;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout << j;
        }
         std::cout << '\n';
    }
    return 0;
}
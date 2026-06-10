// to Print reverse pyramid
#include<iostream>
int main()
{
    int row,temp;
    std::cout << "Enter the Number of Row to display reverse pyramid:";
    std::cin >>row;
    temp=1;
    for(int i=row;i>0;i--) //loop for rows
    {
        for(int k=1;k<temp;k++)//loop for printing space
        {
            std::cout << ' ';
        }
        for(int j=(2*i)-1;j>=1;j--)//loop which only print odd number of star
        {
            std::cout << '*';
        }
        std::cout << '\n';
        temp++;
    }
    return 0;
}
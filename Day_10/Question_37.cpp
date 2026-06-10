// to Print star pyramid
#include<iostream>
int main()
{
    int row,temp;
    std::cout << "Enter the Number of Row in star pyramid:";
    std::cin >> row;
    temp=row;
    for(int i=0;i<row;i++) //loop for row
    {
        for(int k=temp;k>1;k--)//loop for printing space
         {
            std::cout << ' ';
         }
         temp--;
        for(int j=1;j<=(2*i)+1;j++)//loop for printing odd number of star
         {
            std::cout << '*';
         }
         std::cout << '\n';
    }
    return 0;
}
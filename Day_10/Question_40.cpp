// to Print character pyramid
#include<iostream>
int main()
{
    int row,space;
    std::cout << "Enter the Number of Row for Character Pyramid:";
    std::cin >> row;
    space=row;
    for(int i=1;i<=row;i++) //loop for rows
    {
        for(int k=space;k>1;k--)//loop for printing space
        {
            std::cout << ' ';
        }
        space--;
        int temp=2;
        for(int j=1;j<=(2*i)-1;j++)
        {
            if(j<=i)// to pring letter till middle
            {
                char num=(int)64+j;
                std::cout << num;
            }
            else // to print letter after middle
            {
                char num=((int)64+j)-temp;
                std::cout << num;
                temp +=2;
            }
        }
        std::cout <<'\n';
    }
    return 0;
}
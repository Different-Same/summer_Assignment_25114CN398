// a program to Move zeroes to end
#include<iostream>
void printarray(int num[],int size);
void movezero(int num[],int size);
int main()
{
    int size;
    std::cout << "Enter the number of elements in the array:";
    std::cin >> size;
    int* pnum= new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout << "Enter the #" << i+1<< " element :";
        std::cin >> pnum[i];
    }
    std::cout <<"****************** \n";
    std::cout << "The Original Array : \n";
    printarray(pnum,size);
    movezero(pnum,size);
    std::cout <<"****************** \n";
    std::cout <<"The New Array : \n";
    printarray(pnum,size);
    delete[] pnum;
    return 0;
}
void printarray(int num[],int size)
{
    for(int j=0;j<size;j++)
    {
        std::cout << "The element at "<< j+1 << " place : "<<num[j] <<'\n';
    }
}
void movezero(int num[],int size)
{
    int temp=size-1;
    for(int i=0;i<temp;i++)//loop to check for zero
    {
        if(num[i]==0)// Zero condition
        {
            for(int j=i;j<temp;j++)//loop to put zero at end
            {
            std::swap(num[j],num[j+1]);
            }
            temp--;
            i=-1;
        }
    }
}
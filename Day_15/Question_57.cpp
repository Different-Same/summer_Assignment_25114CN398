//to reverse a array
#include<iostream>
void printarray(int num[],int size);
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
    for(int i=0;i<size/2;i++)
    {
        std::swap(pnum[i],pnum[size-1-i]);
    }
    std::cout <<"****************** \n";
    std::cout <<"The Reverse Array : \n";
    printarray(pnum,size);
    delete[] pnum;
    return 0;
}
void printarray(int num[],int size)
{
    for(int j=0;j<size;j++)
    {
        std::cout <<"the element at " << j+1 << " place : "<<num[j] << '\n';
    }
}

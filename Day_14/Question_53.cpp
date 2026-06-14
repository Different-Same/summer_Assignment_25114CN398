// A program to Linear search
#include<iostream>
int search(int num[],int size,int number);
int main()
{
    int size,number,result;
    std::cout << "Enter the number of element in the array:";
    std::cin >> size;
    int* pnum= new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout << "Enter the #" << i+1<< " element :";
        std::cin >> pnum[i];
    }
    std::cout <<"Enter the number to search for :";
    std::cin >> number;
    result=search(pnum,size,number);
    if(result==0)
    {std::cout <<"The Array doesn't contain "<<number;}
    else
    {
        std::cout <<"The Array contain "<<number << " at " << result <<" place";
    }
    delete[] pnum;
    return 0;
}
int search(int num[],int size,int number)
{
    for(int i=0;i<size;i++)
    {
        if(number==num[i])
        {return i+1;}
    }
    return 0;
}
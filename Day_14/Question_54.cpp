// a program to Frequency of an element
#include<iostream>
int frequency(int num[],int size,int number);
int main()
{
    int size,number;
    std::cout << "Enter the number of element in the array:";
    std::cin >> size;
    int* pnum=new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout<< "Enter the #" << i+1<< " element :";
        std::cin >> pnum[i];
    }
    std::cout <<"Enter the number to find frequency:";
    std::cin >>number;
    if(frequency(pnum,size,number)==0)
    {
        std::cout << "The Array doesn't contain " << number;
    }
    else
    {
        std::cout << "The frequency of "<< number<< " : " << frequency(pnum,size,number);
    }
    delete[] pnum;
    return 0;
}
int frequency(int num[],int size,int number)
{
    int times=0;
    for(int i=0;i<size;i++)
    {
        if(num[i]==number)
        {
            times++;
        }
    }
    return times;
}

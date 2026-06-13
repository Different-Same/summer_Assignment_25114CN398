// to Find largest and smallest element
#include<iostream>
int largest(int num[],int size);
int smallest(int num[],int size);
int main()
{
    int size;
    std::cout << "Enter the Number of Element in the array:";
    std::cin >> size;
    int* pnum=new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout <<"Enter the #" << i+1 << " element : ";
        std::cin >> pnum[i];
    }
    std::cout << "The Largest and Smallest Element in the array : " << largest(pnum,size) << " and "<< smallest(pnum,size);
    delete[] pnum;
    return 0;
}
int largest(int num[],int size)
{
    int temp=num[0];
    for(int i=1;i<size;i++)
    {
        if(temp<num[i])
        {temp=num[i];}
    }
    return temp;
}
int smallest(int num[],int size)
{
    int temp=num[0];
    for(int i=1;i<size;i++)
    {
        if(temp>num[i])
        {temp=num[i];}
    }
    return temp;
}
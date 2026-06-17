// To merge array
#include<iostream>
void merge(int num1[],int num2[],int num3[],int size1,int size3);
void inputarray(int num[],int size,int number);
void displayarray(int num[],int size);
int main()
{
    int size1,size2,size3;
    std::cout <<"Enter the number of element in array1:";
    std::cin >> size1;
    std::cout <<"Enter the number of element in array2:";
    std::cin >> size2;
    size3=size1+size2;
    int* pnum1 = new int[size1];
    int* pnum2 = new int[size2];
    inputarray(pnum1,size1,1);
    inputarray(pnum2,size2,2);
    int* pnum3 = new int[size3];
    merge(pnum1,pnum2,pnum3,size1,size3);
    displayarray(pnum3,size3);
    delete[] pnum1;
    delete[] pnum2;
    delete[] pnum3;
    return 0;
}
void inputarray(int num[],int size, int number)
{
    for(int i = 0; i < size; i++)
    {
        std::cout <<"Entet the #" << i + 1 << " element of array" << number << " : " ;
        std::cin >> num[i];  
    }
}
void merge(int num1[],int num2[],int num3[],int size1,int size3)
{
    for(int i=0;i<size3;i++)
    {
    if(i<size1)
    {
        num3[i]=num1[i];
    }
    else
    {
        num3[i]=num2[i-size1];
    }
    }
}
void displayarray(int num[],int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout << "the number #" << i+1 << " place : "<< num[i]<<'\n';
    }
}
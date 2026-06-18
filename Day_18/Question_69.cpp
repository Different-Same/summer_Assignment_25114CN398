// to bubble sort an array
#include<iostream>
void inputarray(int num[],int size);
void bubblesort(int num[],int size);
int main()
{
    int size;
    std::cout << "Enter the number of element in the array:";
    std::cin >> size;
    int* parray= new int[size];
    inputarray(parray,size);
    bubblesort(parray,size);
    delete[] parray;
    return 0;
}
void inputarray(int num[],int size)
{
    for(int i = 0; i < size; i++)
    {
        std :: cout << "Enter the #" << i+1 << " element : ";
        std :: cin >> num[i];
    }
}
void bubblesort(int num[],int size)
{
    for(int i = 0; i < size; i++)
    {
        int temp=0;
        for(int j = 0; j <size-1; j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int k = 0; k <size; k++)
    {
        std :: cout << "The element at #" << k+1 << " place : " << num[k] << '\n';
    }
}
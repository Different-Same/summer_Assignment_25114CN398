// to selection sort an array
#include<iostream>
void inputarray(int num[],int size);
void selectionsort(int num[],int size);
int main()
{
     int size;
    std::cout << "Enter the number of element in the array:";
    std::cin >> size;
    int* parray= new int[size];
    inputarray(parray,size);
    selectionsort(parray,size);
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
void selectionsort(int num[],int size)
{
    for(int i = 0; i < size; i++)
    {
        
        int temp=i;
        for(int j = i;j < size; j++)
        {
            if(num[temp]>num[j])
            {
                temp=j;
        }
        }
        std::swap(num[i],num[temp]);
    }
    for(int k = 0; k <size; k++)
    {
        std :: cout << "The element at #" << k+1 << " place : " << num[k] << '\n';
    }
    
}
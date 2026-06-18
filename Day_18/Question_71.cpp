//  a program to Binary search
#include<iostream>
void inputarray(int num[],int size);
void selectionsort(int num[],int size);
int binarysearch(int num[],int size,int number);
int main()
{
    int size,number;
    std::cout << "Enter the number of element in the array:";
    std::cin >> size;
    int* parray= new int[size];
    inputarray(parray,size);
    selectionsort(parray,size);
    std::cout << "Enter the Number to search : ";
    std::cin >>number;
    std :: cout << "The " << number << " is locataed at " << binarysearch(parray,size,number); 
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
}
int binarysearch(int num[],int size,int number)
{
    int start=0;
    int end=size-1;
  while(start<=end)
  {
    int middle=start+(end-start)/2;
    if(num[middle]==number)
    {

        return middle;
    }
    else if(num[middle]<number)
    {
        start=middle+1;
    }
    else{
        end=middle-1;
    }
  }
  return -1;
}
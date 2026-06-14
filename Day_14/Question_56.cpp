//  a program to Find duplicates in array
#include<iostream>
int duplicate(int num[],int size);
int main()
{
    int size;
    std::cout <<"Enter the number of element in the array: ";
    std::cin >> size;
    int* pnum=new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout <<"Enter the #" << i+1<<" element :";
        std::cin >> pnum[i];
    }
    if(duplicate(pnum,size)==0)
    {
        std::cout <<"There is not Duplicate in the array";
    }
    else
    {
        std::cout <<"There are "<<duplicate(pnum,size) << " duplicate element in array";
    }
    delete[] pnum;
    return 0;
}
int duplicate(int num[], int size)
{
    int* holder = new int[size];
    int k = 0;
    int duplicate = 0;

    for(int i = 0; i < size; i++)
    {
        bool found = false;

        // Check if we've already processed this value
        for(int l = 0; l < k; l++)
        {
            if(holder[l] == num[i])
            {
                found = true;
                break;
            }
        }

        if(found)
        {
            continue;
        }

        int count = 0;

        // Count occurrences of num[i]
        for(int j = 0; j < size; j++)
        {
            if(num[j] == num[i])
            {
                count++;
            }
        }

        if(count > 1)
        {
            duplicate++;
            holder[k] = num[i];
            k++;
        }
    }

    delete[] holder;
    return duplicate;
}
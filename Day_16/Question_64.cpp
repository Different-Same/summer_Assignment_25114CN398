//  to Remove duplicates from array
#include <iostream>

int removeDuplicates(int num[], int size);

int main()
{
    int size;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    int* pnum = new int[size];

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter the #" << i + 1 << " number: ";
        std::cin >> pnum[i];
    }

    int newSize = removeDuplicates(pnum, size);

    std::cout << "\nArray after removing duplicates:\n";

    for(int i = 0; i < newSize; i++)
    {
        std::cout << pnum[i] << ' ';
    }

    std::cout << '\n';

    delete[] pnum;
    return 0;
}

int removeDuplicates(int num[], int size)
{
    int k = 0;

    for(int i = 0; i < size; i++)//loop that check for duplicate
    {
        bool found = false;

        for(int j = 0; j < k; j++)//loop check for duplicate
        {
            if(num[i] == num[j])// duplicate found, hence skip
            {
                found = true;
                break;
            }
        }

        if(!found)//duplicate not found, update the array
        {
            num[k] = num[i];
            k++;
        }
    }

    return k;
}
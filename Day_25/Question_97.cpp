// to merge sorted array
#include<iostream>

int main()
{
    int size1, size2;

    std::cout << "Enter size of First Array : ";
    std::cin >> size1;

    std::cout << "Enter size of Second Array : ";
    std::cin >> size2;

    int* array1 = new int[size1];
    int* array2 = new int[size2];

    std::cout << "Enter First Array Elements : ";
    for(int i = 0; i < size1; i++)
    {
        std::cin >> array1[i];
    }

    std::cout << "Enter Second Array Elements : ";
    for(int i = 0; i < size2; i++)
    {
        std::cin >> array2[i];
    }

    int size = size1 + size2;
    int* merge = new int[size];

    int k = 0;

    for(int i = 0; i < size1; i++)
    {
        merge[k++] = array1[i];
    }

    for(int i = 0; i < size2; i++)
    {
        merge[k++] = array2[i];
    }

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(merge[j] > merge[j + 1])
            {
                int temp = merge[j];
                merge[j] = merge[j + 1];
                merge[j + 1] = temp;
            }
        }
    }

    std::cout << "Merged Array : ";
    for(int i = 0; i < size; i++)
    {
        std::cout << merge[i] << " ";
    }

    delete[] array1;
    delete[] array2;
    delete[] merge;

    return 0;
}
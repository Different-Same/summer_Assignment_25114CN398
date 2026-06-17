//to Find common elements
#include<iostream>
void intersection(int num1[],int num2[],int size1,int size2);
void inputarray(int num[],int size, int number);
int main()
{
    int size1,size2;
    std::cout <<"Enter the number of element in array1:";
    std::cin >> size1;
    std::cout <<"Enter the number of element in array2:";
    std::cin >> size2;
    int* pnum1 = new int[size1];
    int* pnum2 = new int[size2];
    inputarray(pnum1,size1,1);
    inputarray(pnum2,size2,2);
    intersection(pnum1,pnum2,size1,size2);
    delete[] pnum1;
    delete[] pnum2;
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
void intersection(int num1[], int num2[], int size1, int size2)
{
    int k = 0;
    int min = (size1 > size2) ? size2 : size1;
    int* holder = new int[min];

    for(int i = 0; i < size1; i++)//loop for checking same element
    {
        for(int j = 0; j < size2; j++)
        {
            if(num1[i] == num2[j])// condition for same element
            {
                bool found = false;

                for(int m = 0; m < k; m++)//loop for preventing duplicate element in array
                {
                    if(num1[i] == holder[m])
                    {
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    holder[k] = num1[i];
                    k++;
                }

                break;
            }
        }
    }

    std::cout << "The Common element: ";

    for(int i = 0; i < k; i++)//loop to print
    {
        std::cout << holder[i] << ' ';
    }

    delete[] holder;
}

// a program to Create menu-driven array operations system
#include<iostream>

int main()
{
    int size;

    std::cout << "Enter the Size of Array : ";
    std::cin >> size;

    int *parray = new int[size];

    std::cout << "Enter the Elements : ";
    for(int i = 0; i < size; i++)
    {
        std::cin >> parray[i];
    }

    int choice;

    do
    {
        std::cout << "\n===== Array Operations =====";
        std::cout << "\n1. Display Array";
        std::cout << "\n2. Find Maximum";
        std::cout << "\n3. Find Minimum";
        std::cout << "\n4. Find Sum";
        std::cout << "\n5. Find Average";
        std::cout << "\n6. Exit";
        std::cout << "\nEnter Your Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                std::cout << "Array : ";
                for(int i = 0; i < size; i++)
                {
                    std::cout << parray[i] << " ";
                }
                break;
            }

            case 2:
            {
                int max = parray[0];

                for(int i = 1; i < size; i++)
                {
                    if(parray[i] > max)
                    {
                        max = parray[i];
                    }
                }

                std::cout << "Maximum = " << max;
                break;
            }

            case 3:
            {
                int min = parray[0];

                for(int i = 1; i < size; i++)
                {
                    if(parray[i] < min)
                    {
                        min = parray[i];
                    }
                }

                std::cout << "Minimum = " << min;
                break;
            }

            case 4:
            {
                int sum = 0;

                for(int i = 0; i < size; i++)
                {
                    sum += parray[i];
                }

                std::cout << "Sum = " << sum;
                break;
            }

            case 5:
            {
                int sum = 0;

                for(int i = 0; i < size; i++)
                {
                    sum += parray[i];
                }

                std::cout << "Average = " << (float)sum / size;
                break;
            }

            case 6:
            {
                std::cout << "Exiting...";
                break;
            }

            default:
            {
                std::cout << "Invalid Choice";
            }
        }

    } while(choice != 6);

    delete[] parray;

    return 0;
}
// a program to Create menu-driven string operations system
#include<iostream>
#include<cctype>

int main()
{
    std::string str;

    std::cout << "Enter the String : ";
    std::getline(std::cin, str);

    int choice;

    do
    {
        std::cout << "\n===== String Operations =====";
        std::cout << "\n1. Display String";
        std::cout << "\n2. Find Length";
        std::cout << "\n3. Convert to Uppercase";
        std::cout << "\n4. Convert to Lowercase";
        std::cout << "\n5. Reverse String";
        std::cout << "\n6. Exit";
        std::cout << "\nEnter Your Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                std::cout << "String : " << str;
                break;
            }

            case 2:
            {
                std::cout << "Length = " << str.length();
                break;
            }

            case 3:
            {
                for(int i = 0; i < str.length(); i++)
                {
                    str[i] = toupper(str[i]);
                }

                std::cout << "Uppercase : " << str;
                break;
            }

            case 4:
            {
                for(int i = 0; i < str.length(); i++)
                {
                    str[i] = tolower(str[i]);
                }

                std::cout << "Lowercase : " << str;
                break;
            }

            case 5:
            {
                for(int i = 0; i < str.length() / 2; i++)
                {
                    std::swap(str[i], str[str.length() - 1 - i]);
                }

                std::cout << "Reversed : " << str;
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

    return 0;
}
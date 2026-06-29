// a program to Create inventory management system
#include<iostream>

int main()
{
    const int size = 100;

    int item_id[size];
    std::string item_name[size];
    int item_quantity[size];
    double item_price[size];

    int total = 0;
    int choice;

    do
    {
        std::cout << "\n===== Inventory Management System =====";
        std::cout << "\n1. Add Item";
        std::cout << "\n2. Display Items";
        std::cout << "\n3. Search Item";
        std::cout << "\n4. Update Quantity";
        std::cout << "\n5. Exit";
        std::cout << "\nEnter Your Choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                std::cout << "Enter Item ID : ";
                std::cin >> item_id[total];

                std::cout << "Enter Item Name : ";
                std::cin >> item_name[total];

                std::cout << "Enter Quantity : ";
                std::cin >> item_quantity[total];

                std::cout << "Enter Price : ";
                std::cin >> item_price[total];

                total++;

                std::cout << "Item Added Successfully.";
                break;
            }

            case 2:
            {
                if(total == 0)
                {
                    std::cout << "Inventory is Empty.";
                    break;
                }

                for(int i = 0; i < total; i++)
                {
                    std::cout << "\n----------------------";
                    std::cout << "\nItem ID : " << item_id[i];
                    std::cout << "\nItem Name : " << item_name[i];
                    std::cout << "\nQuantity : " << item_quantity[i];
                    std::cout << "\nPrice : " << item_price[i];
                }
                break;
            }

            case 3:
            {
                int id;
                bool found = false;

                std::cout << "Enter Item ID : ";
                std::cin >> id;

                for(int i = 0; i < total; i++)
                {
                    if(item_id[i] == id)
                    {
                        std::cout << "\nItem Found";
                        std::cout << "\nName : " << item_name[i];
                        std::cout << "\nQuantity : " << item_quantity[i];
                        std::cout << "\nPrice : " << item_price[i];

                        found = true;
                        break;
                    }
                }

                if(found == false)
                {
                    std::cout << "Item Not Found.";
                }

                break;
            }

            case 4:
            {
                int id;
                bool found = false;

                std::cout << "Enter Item ID : ";
                std::cin >> id;

                for(int i = 0; i < total; i++)
                {
                    if(item_id[i] == id)
                    {
                        std::cout << "Enter New Quantity : ";
                        std::cin >> item_quantity[i];

                        std::cout << "Quantity Updated.";
                        found = true;
                        break;
                    }
                }

                if(found == false)
                {
                    std::cout << "Item Not Found.";
                }

                break;
            }

            case 5:
            {
                std::cout << "Exiting...";
                break;
            }

            default:
            {
                std::cout << "Invalid Choice.";
            }
        }

    } while(choice != 5);

    return 0;
}
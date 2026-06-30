// Hotel Reservation System
#include<iostream>
#include<string>

std::string room_type[20];
int room_number[20];
float room_price[20];
bool room_available[20];
std::string customer_name[20];
int booked_days[20];

void addRoom(int time,int &current_size);
void displayRoom(int current_size);
void searchRoom(int target,int current_size);
void bookRoom(int target,int current_size);
void cancelBooking(int target,int current_size);
void updateRoom(int target,int current_size);
void deleteRoom(int target,int &current_size);

int main()
{
    int current_size=0;
    int choice;

    do
    {
        std::cout<<"******** Hotel Reservation System ********\n";
        std::cout<<"1. Add Room\n";
        std::cout<<"2. Display Rooms\n";
        std::cout<<"3. Search Room\n";
        std::cout<<"4. Book Room\n";
        std::cout<<"5. Cancel Booking\n";
        std::cout<<"6. Update Room\n";
        std::cout<<"7. Delete Room\n";
        std::cout<<"8. Exit\n";
        std::cout<<"Enter Choice : ";
        std::cin>>choice;

        switch(choice)
        {
            case 1:
            {
                int n;
                std::cout<<"Enter Number of Rooms : ";
                std::cin>>n;
                addRoom(n,current_size);
                break;
            }

            case 2:
                displayRoom(current_size);
                break;

            case 3:
            {
                int id;
                std::cout<<"Enter Room Number : ";
                std::cin>>id;
                searchRoom(id,current_size);
                break;
            }

            case 4:
            {
                int id;
                std::cout<<"Enter Room Number : ";
                std::cin>>id;
                bookRoom(id,current_size);
                break;
            }

            case 5:
            {
                int id;
                std::cout<<"Enter Room Number : ";
                std::cin>>id;
                cancelBooking(id,current_size);
                break;
            }

            case 6:
            {
                int id;
                std::cout<<"Enter Room Number : ";
                std::cin>>id;
                updateRoom(id,current_size);
                break;
            }

            case 7:
            {
                int id;
                std::cout<<"Enter Room Number : ";
                std::cin>>id;
                deleteRoom(id,current_size);
                break;
            }

            case 8:
                std::cout<<"Program Ended\n";
                break;

            default:
                std::cout<<"Invalid Choice\n";
        }

    }while(choice!=8);
}

void addRoom(int time,int &current_size)
{
    if(current_size+time>20)
    {
        std::cout<<"Insufficient Space\n";
        return;
    }

    for(int i=current_size;i<current_size+time;i++)
    {
        std::cin.ignore();

        std::cout<<"Enter Room Type : ";
        std::getline(std::cin,room_type[i]);

        std::cout<<"Enter Room Number : ";
        std::cin>>room_number[i];

        std::cout<<"Enter Room Price Per Day : ";
        std::cin>>room_price[i];

        room_available[i]=true;
        customer_name[i]="";
        booked_days[i]=0;

        std::cout<<"*********************\n";
    }

    current_size+=time;
}

void displayRoom(int current_size)
{
    for(int i=0;i<current_size;i++)
    {
        std::cout<<"******** Room "<<i+1<<" ********\n";
        std::cout<<"Room Number : "<<room_number[i]<<'\n';
        std::cout<<"Room Type : "<<room_type[i]<<'\n';
        std::cout<<"Price : "<<room_price[i]<<'\n';
        std::cout<<"Available : "<<room_available[i]<<'\n';

        if(!room_available[i])
        {
            std::cout<<"Customer : "<<customer_name[i]<<'\n';
            std::cout<<"Days : "<<booked_days[i]<<'\n';
            std::cout<<"Bill : "<<booked_days[i]*room_price[i]<<'\n';
        }

        std::cout<<"*********************\n";
    }
}

void searchRoom(int target,int current_size)
{
    int id=-1;

    for(int i=0;i<current_size;i++)
    {
        if(room_number[i]==target)
        {
            id=i;
            break;
        }
    }

    if(id==-1)
    {
        std::cout<<"Room Not Found\n";
        return;
    }

    std::cout<<"Room Number : "<<room_number[id]<<'\n';
    std::cout<<"Room Type : "<<room_type[id]<<'\n';
    std::cout<<"Price : "<<room_price[id]<<'\n';
    std::cout<<"Available : "<<room_available[id]<<'\n';

    if(!room_available[id])
    {
        std::cout<<"Customer : "<<customer_name[id]<<'\n';
        std::cout<<"Days : "<<booked_days[id]<<'\n';
        std::cout<<"Bill : "<<booked_days[id]*room_price[id]<<'\n';
    }
}

void bookRoom(int target,int current_size)
{
    int id=-1;

    for(int i=0;i<current_size;i++)
    {
        if(room_number[i]==target)
        {
            id=i;
            break;
        }
    }

    if(id==-1)
    {
        std::cout<<"Room Not Found\n";
        return;
    }

    if(!room_available[id])
    {
        std::cout<<"Room Already Booked\n";
        return;
    }

    std::cin.ignore();

    std::cout<<"Enter Customer Name : ";
    std::getline(std::cin,customer_name[id]);

    std::cout<<"Enter Number of Days : ";
    std::cin>>booked_days[id];

    room_available[id]=false;

    std::cout<<"Booking Successful\n";
}

void cancelBooking(int target,int current_size)
{
    int id=-1;

    for(int i=0;i<current_size;i++)
    {
        if(room_number[i]==target)
        {
            id=i;
            break;
        }
    }

    if(id==-1)
    {
        std::cout<<"Room Not Found\n";
        return;
    }

    room_available[id]=true;
    customer_name[id]="";
    booked_days[id]=0;

    std::cout<<"Booking Cancelled\n";
}

void updateRoom(int target,int current_size)
{
    int id=-1;

    for(int i=0;i<current_size;i++)
    {
        if(room_number[i]==target)
        {
            id=i;
            break;
        }
    }

    if(id==-1)
    {
        std::cout<<"Room Not Found\n";
        return;
    }

    std::cin.ignore();

    std::cout<<"Enter New Room Type : ";
    std::getline(std::cin,room_type[id]);

    std::cout<<"Enter New Price : ";
    std::cin>>room_price[id];
}

void deleteRoom(int target,int &current_size)
{
    int id=-1;

    for(int i=0;i<current_size;i++)
    {
        if(room_number[i]==target)
        {
            id=i;
            break;
        }
    }

    if(id==-1)
    {
        std::cout<<"Room Not Found\n";
        return;
    }

    for(int i=id;i<current_size-1;i++)
    {
        room_type[i]=room_type[i+1];
        room_number[i]=room_number[i+1];
        room_price[i]=room_price[i+1];
        room_available[i]=room_available[i+1];
        customer_name[i]=customer_name[i+1];
        booked_days[i]=booked_days[i+1];
    }

    current_size--;

    std::cout<<"Room Deleted\n";
}
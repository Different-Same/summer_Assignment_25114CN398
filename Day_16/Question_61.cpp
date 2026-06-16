//  a program to Find missing number in array
#include<iostream>
void sort(int num[],int size);
void missing(int num[],int size);
int main()
{
    int size;
    std::cout <<"Enter the number of element in the array:";
    std::cin >> size;
    int* pnum=new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout <<"Enter the#" << i+1<< " number: ";
        std::cin >> pnum[i];
    }
    sort(pnum,size);
    missing(pnum,size);
    delete[] pnum;
    return 0;

}
void sort(int num[],int size)
{
    int temp;
    for(int j=0;j<size;j++) //loop to sort the array
    {
     for(int i=j+1;i<size;i++)
     {
        if(num[j]>num[i])
        {
            temp=num[j];
            num[j]=num[i];
            num[i]=temp;
        }
     }
    }
}
void missing(int num[],int size)
{
    int start=num[0];
    for(int i=0;i<size;i++)//loop to count number from start to end
    {
        if(num[i]==start) //condition to move ahead when number match
        {
            start++;
        }
        else// condition to print when detect missing number
        {
            std::cout << start<<" is missing in the array";
            break;
        }
    }
}

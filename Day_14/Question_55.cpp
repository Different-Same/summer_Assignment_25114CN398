//  a program to Second largest element
#include<iostream>
int secondlargest(int num[],int size);
int main()
{
    int size,ss;
    std::cout << "Enter the number of element of array:";
    std::cin >> size;
    int* pnum=new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout <<"Enter the #"<< i+1<<" element :";
        std::cin >> pnum[i]; 
    }
    ss=secondlargest(pnum,size);
    std::cout << "The second largest element in array :" << ss;
    delete[] pnum;
    return 0;
}
int secondlargest(int num[],int size)
{
    int temp=num[0],secondlargest=0;
    for(int i=1;i<size;i++)
    {
        if(temp<num[i])
        {
            secondlargest=temp;
            temp=num[i];
        }
        else if(temp>num[i] && secondlargest<num[i])
        {
            secondlargest=num[i];
        }
     }
     return secondlargest;
}
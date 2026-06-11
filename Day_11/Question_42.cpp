//to Write function to find maximum
#include<iostream>
int max(int x[],int size);
int main()
{
   int num,Max;
   std::cout << "Enter the Number of element:";
   std::cin >> num;
   int number[num];
   for(int i=0;i<num;i++)
   {
    std:: cout << "Enter the " << i+1 << " term :";
    std::cin >> number[i];
   }
   Max=max(number,num);
   std::cout << "The Maximum :" << Max;
    return 0;
}
int max(int x[],int size)
{
    int temp=x[0];
    for(int i=0;i <size;i++)
    {
        if(x[i]>temp)
        {
            temp=x[i];
        }
    }
    return temp;
}
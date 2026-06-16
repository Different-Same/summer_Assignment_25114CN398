// program to Find pair with given sum
#include<iostream>
void pair(int num[],int size, int sum);
int main()
{
    int size,sum;
    std::cout <<"Enter the number of element in the array:";
    std::cin >> size;
    int* pnum =new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout <<"Enter the #" << i+1<< " number: ";
        std::cin >> pnum[i];
    }
    std::cout <<"Enter the Sum:";
    std::cin >> sum;
    pair(pnum,size,sum);
    delete[] pnum;
    return 0;
}
void pair(int num[],int size, int sum)
{
   for(int i=0;i<size-1;i++)
   {
    for(int j=i;j<size-1;j++)
    {
    if(num[i]+num[j]==sum)
    {
        std::cout << "The pair is " << num[i] <<" and " << num[j] <<'\n';
    }
   }
 }
}
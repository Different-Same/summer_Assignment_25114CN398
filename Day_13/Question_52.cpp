//  to Count even and odd elements
#include<iostream>
void evenandodd(int num[],int size,int &even,int &odd);
int main()
{
    int size,odd=0,even=0;
    std::cout << "Enter the Number for element in Array:";
    std::cin >> size;
    int* pnum=new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout << "Enter the #" << i+1<< " element :";
        std::cin >> pnum[i];
    }
    evenandodd(pnum,size,even,odd);
    std::cout << "The Number of Even and Odd element in array : " << even << " and "<< odd;
    delete[] pnum;
    return 0;
}
void evenandodd(int num[],int size,int &even,int &odd)
{
    for(int i=0;i<size;i++)
    {
        if(num[i]%2==0)
        {even++;}
        else
        {
            odd++;
        }
    }
}

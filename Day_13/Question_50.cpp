// a program to Find sum and average of array
#include<iostream>
int sum(int num[],int size);
float average(int num[],int size);
int main()
{
    int size,Sum;
    float Average;
    std::cout <<"Enter the Number of ELement in Array:";
    std::cin >> size;
    int* pnum=new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout << "Enter the #"<< i+1 << " Element : ";
        std::cin >> pnum[i];
    }
    Sum=sum(pnum,size);
    Average=average(pnum,size);
    std::cout<<"The Sum of element in array : " << Sum << '\n';
    std::cout<<"The Aevrage of element in array : " << Average << '\n';
    delete[] pnum;
    return 0;
}
int sum(int num[],int size)
{
    int Tsum=0;
    for(int i=0;i<size;i++)
    {
        Tsum+=num[i];
    }
    return Tsum;
}
float average(int num[], int size)
{
    float Taverage=0;
     for(int i=0;i<size;i++)
    {
        Taverage+=num[i];
    }
    return (float)Taverage/(float)size;
}
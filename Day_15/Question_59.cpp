// to Rotate array right
#include<iostream>
void rotateright(int num[],int size,int turn);
void printarray(int num[],int size);
int main()
{
    int size,turn;
    std::cout <<"Enter the number of elements in the array :";
    std::cin >> size;
    int* pnum= new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout <<"Enter the #" << i+1<<" element :";
        std::cin >> pnum[i];
    }
    std::cout << "Enter the number of turn to rotate toward right: ";
    std::cin >> turn;
    std::cout <<"********************\n";
    std::cout <<"The Original Array : \n";
    printarray(pnum,size);
    rotateright(pnum,size,turn);
    std::cout <<"********************\n";
    std::cout <<"The Rotated Array : \n";
    printarray(pnum,size);
    delete[] pnum;
    return 0;
}
void printarray(int num[],int size)
{
    for(int j=0;j<size;j++)
    {
        std::cout << "The element at "<< j+1 << " place : "<<num[j] <<'\n';
    }
}
void rotateright(int num[],int size,int turn)
{
    for(int k=0;k<turn;k++)
    {
        for(int i=size-1;i>0;i--)
        {
        std::swap(num[i],num[i-1]);
         }
    }
}
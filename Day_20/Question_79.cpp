// a program to Find row-wise sum
#include<iostream>
void formarray(int** num,int row,int column);
void input(int** num,int row,int column);
int rowsum(int** num,int row,int column,int target);
void deletearray(int** num,int row);
int main()
{
    int row,column,target,sum;
    std::cout << "Enter the row of the matrix: ";
    std::cin >> row;
    std::cout << "Enter the column of the matrix: ";
    std::cin >> column;
    int** parray= new int*[row];
    formarray(parray,row,column);
    input(parray,row,column);
    std::cout << "Enter the row you want sum of :";
    std::cin >> target;
    if(target < 1 || target > row)
    {
        std::cout << "Invalid Entry";
        deletearray(parray,row);
        delete[] parray;
        return 0;
    }
    sum=rowsum(parray,row,column,target);
    std:: cout << "The sum of row " << target << " : " <<sum;
    deletearray(parray,row);
    delete[] parray;
    return 0;
}
void formarray(int** num,int row,int column)
{
    for(int i = 0; i < row; i++)
    {
        num[i]=new int[column];
    }
}
void input(int** num,int row,int column)
{
    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            std::cout << "Enter the element at matrix"<<'['<<i<<']'<<'['<<j<<"] : ";
            std:: cin >> num[i][j];
        }
    }
}
int rowsum(int** num,int row,int column,int target)
{
    int sum=0;
    int i=target-1;
        for(int j = 0; j < column ;j++)
        {
                sum+=num[i][j];
        }

    return sum;
}
void deletearray(int** num,int row)
{
    for(int i = 0; i < row; i++)
    {
        delete[] num[i];
    }
}
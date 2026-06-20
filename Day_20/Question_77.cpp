//a program to Multiply matrices
#include<iostream>
void formarray(int ** num,int row,int column);
void inputvalue(int** num,int row, int column);
void multiplication(int** num1,int** num2,int** num3,int row, int column,int times);
void deletearray(int** num, int row);
int main()
{
    int row1,column1,row2,column2;
    std::cout << "Enter the number of row in the matrix1 :";
    std::cin >> row1;
    int** parray1= new int*[row1];
    std::cout << "Enter the number of column in the matrix1 :";
    std::cin >> column1;
    formarray(parray1,row1,column1);
    std::cout << "Enter the number of row in the matrix2 :";
    std::cin >> row2;
    int** parray2= new int*[row2];
    std::cout << "Enter the number of column in the matrix2 :";
    std::cin >> column2;
    formarray(parray2,row2,column2);
    if(column1!=row2)
    {
        std::cout <<"Uncompatible Matrix Multiplication \n";
        return 0;
    }
    int** parray3 = new int*[row1];
    formarray(parray3,row1,column2);
    inputvalue(parray1,row1,column1);
    inputvalue(parray2,row2,column2);
    std::cout << "The Mutiplied matrix : \n";
    multiplication(parray1,parray2,parray3,row1,column2,column1);
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)
        {
            std::cout << parray3[i][j]<< ' ';
        }
        std:: cout << '\n';
    }
    deletearray(parray1,row1);
    deletearray(parray2,row2);
    deletearray(parray3,row1);
    delete[] parray1;
    delete[] parray2;
    delete[] parray3;
    return 0;
}
void formarray(int ** num,int row,int column)
{
 for(int i = 0; i < row; i++)
    {
        num[i]=new int[column]();
    }
}
void inputvalue(int** num,int row, int column)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            std:: cout << "Enter the value of matrix" <<'[' << i << ']' <<'['<<j<<"]: ";
            std::cin >> num[i][j];
        }
    }
}
void multiplication(int** num1,int** num2,int** num3,int row, int column,int times)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            int sum=0;
            for(int k=0;k<times;k++)
            {
                sum+=num1[i][k]*num2[k][j];
            }
            num3[i][j]=sum;
        }
    }
}
void deletearray(int** num, int row)
{
    for(int i=0; i < row; i++)
    {
        delete[] num[i];
    }
}
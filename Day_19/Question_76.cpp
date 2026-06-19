// to Find diagonal sum
#include<iostream>
int main()
{
    int row,column,sum=0;
    std::cout << "Enter the number of row in matrix :";
    std::cin >> row; 
    std::cout << "Enter the number of column in matrix :";
    std::cin >> column;
    if(row!=column)
    {
        std::cout <<"The Matrix Must Square";
        return 0;
    }
    else{
        int** parray= new int*[row];
        for(int l=0;l<row;l++)
        {
            parray[l]=new int[column];
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                std::cout <<"Enter the element of matrix : "<<'[' << i<<']' <<'['<<j<<"]: ";
                    std::cin >>parray[i][j];
              if(i==j)
                {
                    sum+=parray[i][j];
                }
            }
        }
        std::cout <<"The Diagonal Sum : "<< sum;
        for(int y=0;y<row;y++)
        {
            delete[] parray[y];
        }
        delete[] parray;
    }
    return 0;
}
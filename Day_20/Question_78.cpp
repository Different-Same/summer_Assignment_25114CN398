// to check symmetric matrix
#include<iostream>
int main()
{
    int row,column;
    std::cout << "Enter the Number of Rows: ";
    std::cin >> row;
    int** psum = new int*[row];
    std::cout << "Enter the Number of columns :";
    std::cin >> column;
    if(row!=column)
    {
        std::cout << "Unsysmetric Matrix \n";
        return 0;
    }
    for(int i = 0;i < row; i++)
    {
        psum[i]=new int[column];
    }
     int** pnewmatrix= new int*[column];
    for(int f=0;f<column;f++)
    {
        pnewmatrix[f]=new int[row];
    }
    for(int o=0;o<row;o++)
    {
        for(int p=0;p<column;p++)
        {
            std::cout << "Enter the element of matrix"<<'[' << o<<']' <<'['<<p<<"]: ";
            std::cin >> psum[o][p];
        }
    }
    for(int k=0;k<column;k++)
    {
        for(int l=0;l<row;l++)
        {
            pnewmatrix[k][l]=psum[l][k];
        }
    }
    for(int n=0;n<column;n++)
    {
        for(int m=0;m<row;m++)
        {
            if(psum[n][m]!=pnewmatrix[n][m])
            {
                std::cout << "Unsymmetric Matrix \n";
                return 0;
            }
        }
    }
    std::cout <<"It is a Symmetric Matrix";
    for(int g=0;g<row;g++)
    {
        delete[] psum[g];
    }
    for(int h=0;h<column;h++)
    {
        delete[]pnewmatrix[h];
    }
    delete[] pnewmatrix;
    delete[] psum;
    return 0;
}
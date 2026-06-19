// To subract matrices
#include<iostream>
int main()
{
    int number,row, column;
    std::cout <<"Enter the Number of Matrices:";
    std::cin >> number;
    std::cout <<"Enter the Number of Row in array:";
    std::cin >> row;
    int** psum=new int*[row];
    std::cout << "Enter the Number of Column in array:";
    std:: cin >>column;
    for(int i=0;i<row;i++)
    {
        psum[i]=new int[column]();
    }
    for(int j=0;j<number;j++)
    {
        for(int k=0;k<row;k++)
        {
            int temp=0;
            for(int l=0;l<column;l++)
            {
                std::cout << "Enter the elment of matrix "<< j+1 << '['<<k<<']'<<'['<<l << "]:";
                std:: cin >>temp;
                if(j==0)
                {
                psum[k][l]=temp;
                }
                else{
                psum[k][l]-=temp;
                }
            }
        }
    }
    std::cout <<"The Subtracted Matrix : \n";
    for(int z=0;z<row;z++)
    {
        for(int x=0;x<column;x++)
        {
            std::cout<< psum[z][x] <<' ';
        }
        std::cout <<"\n";
    }
    for(int m=0;m<row;m++)
        {
            delete[] psum[m];
        }
        delete[] psum;
        return 0;
}

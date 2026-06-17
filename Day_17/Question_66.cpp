// a program to Union of arrays
#include<iostream>
void Union(int num1[],int num2[],int size1, int size2);
void inputarray(int num[],int size, int number);
int main()
{
    int size1,size2;
    std::cout <<"Enter the number of element in array1:";
    std::cin >> size1;
    std::cout <<"Enter the number of element in array2:";
    std::cin >> size2;
    int* pnum1 = new int[size1];
    int* pnum2 = new int[size2];
    inputarray(pnum1,size1,1);
    inputarray(pnum2,size2,2);
    Union(pnum1,pnum2,size1,size2);
    delete[] pnum1;
    delete[] pnum2;
    return 0;
}
void inputarray(int num[],int size, int number)
{
    for(int i = 0; i < size; i++)
    {
        std::cout <<"Entet the #" << i + 1 << " element of array" << number << " : " ;
        std::cin >> num[i];  
    }
}
void Union(int num1[],int num2[],int size1, int size2)
{
    int* holder= new int[size1+size2];
    int k=0;
    for(int i=0;i<size1+size2;i++) // loop to check duplicate number
    {
        if(i<size1)// to fill holder array with unique number till size 1
        {
            bool found=false;
            for(int j=0;j<k;j++)
            {
                if(num1[i]==holder[j]) //loop for duplicate number to skip
                {
                    found=true;
                    break;
                }
            }
            if(!found)//loop for unique number to fill holder
            {
                holder[k]=num1[i];
                k++;
            }
        }
        else // to fill holder array with unique number frome size 1 to size 2
        {
            bool found=false;
            for(int j=0;j<k;j++)
            {
                if(num2[i-size1]==holder[j])
                {
                    found=true;
                    break;
                }
            }
            if(!found)
            {
                holder[k]=num2[i-size1];
                k++;
            }
        }
    }
    std::cout <<"The Union array : \n"; 
    for(int l=0;l<k;l++)//loop to print holder array
    {
        std::cout <<"The elment at #"<< l+1 <<" place : "<< holder[l] << '\n';
    }
    delete[] holder;
}
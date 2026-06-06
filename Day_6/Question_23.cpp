//To Count set bits in a number
#include<iostream>
int main()
{
    int binary,bits=0,temp;
    std::cout << "Enter the Binary Number to count bits:";
    std::cin >> binary;
    for(int i=binary;i>0;i=i/10)
    {
        temp=i%10;
        if(temp==1)
        {bits++;}
    }
    std::cout << "The Number of bits in " << binary << " : "<< bits;
    return 0;
}
// to Write function to check prime
#include<iostream>

bool prime(int a);
int main()
{
    int num;
    std::cout << "Enter the Number to check whether  it is prime or not: ";
    std::cin >> num;
    if(prime(num))
    {
        std::cout << "The Number is Prime";
    }
    else
    {
        std::cout << "The Number is not prime";
    }
    return 0;
}
bool prime(int a)
{
    int temp=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            temp++;
        }
    }
    if(temp==2)
    {return true;
    }
    return false;
}

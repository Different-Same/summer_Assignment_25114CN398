//to Recursive factorial
#include<iostream>
int fac(int num);
int main()
{
    int num;
    int factorial;
    std::cout << "Enter the Number to Find Factorial:";
    std::cin >> num;
    factorial=fac(num);
    std::cout << "The Factorial of " << num << " : "<< factorial;
    return 0;
}
int fac(int num)
{
    if(num==1)
    {return 1;}
    return num*fac(num-1);
}
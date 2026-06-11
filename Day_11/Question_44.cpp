// to Write function to find factorial
#include<iostream>
int fact(int a);
int main()
{
    int num;
    std::cout << "Enter the Number to find factorial : ";
    std::cin >> num;
    std::cout << "The Factorial of Number : " << fact(num);
    return 0;
}
int fact(int a)
{
    int temp=1;
    for(int i=1; i<=a;i++)
    {
        temp*=i;
    }
    return temp;
}
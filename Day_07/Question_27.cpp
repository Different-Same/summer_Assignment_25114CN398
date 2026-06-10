//to Recursive sum of digits
#include<iostream>
int sumdigit(int num);
int main()
{
    int num,sum;
    std::cout << "Enter the Number to find sum of digit :";
    std::cin >> num;
    sum = sumdigit(num);
    std::cout << "The Sum of digit of " << num << " : "<< sum;
    return 0;
}
int sumdigit(int num)
{
    int rem=num%10;
    if( num<0 || num==0)
    {return 0;}
    return rem+sumdigit(num/10);
}
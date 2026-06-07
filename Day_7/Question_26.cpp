// to Recursive Fibonacci.
#include<iostream>
int fibon(int n, int a, int b);
int main()
{
    int a,b,n,value;
    std::cout << "Enter the first element of Fibonacci:";
    std:: cin >> a;
    std::cout << "Enter the Second element of Fibonacci:";
    std::cin >> b;
    std::cout << "Enter the Nth term you wanna find:";
    std:: cin >> n;
    value=fibon(n,a,b);
    std::cout << "The value of " << n <<"th term : "<< value;
    return 0;
}
int fibon(int n, int a, int b)
{
    if(n==1)
    {return a;}
    else if(n==2)
    {
        return b;
    }
    return fibon(n-1,a,b)+fibon(n-2,a,b);
}
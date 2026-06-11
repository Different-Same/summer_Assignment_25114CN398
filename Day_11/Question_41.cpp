//  to Write function to find sum of two numbers
#include<iostream>
int Sum(int a,int b);
int main()
{
    int a,b,sum;
    std::cout << "Enter the First Number:";
    std::cin >> a;
    std::cout << "Enter the Second Number:";
    std::cin >> b;
    sum=Sum(a,b);
    std::cout << "The sum of "<< a << " and "<< b << " : "<< sum;
    return 0;
}
 int Sum(int a,int b)
 {
    return a+b;
 }
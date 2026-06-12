// To Write function for Fibonacci
#include<iostream>
int perf(int x);
int main()
{
    int num,result;
    std::cout << "Enter the Number to Check whether it is perfect or not :";
    std::cin >> num;
    result=perf(num);
    if(result==num)
    {
        std::cout<< num <<"  is a perfect Number";
    }
    else
    {
        std::cout<< num <<"  is not a perfect Number";
    }
    return 0;
}
int perf(int x)
{
    int sum=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
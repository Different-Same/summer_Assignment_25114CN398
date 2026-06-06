// To Find x^n without pow()
#include<iostream>
int main()
{
    int num,power,rnum=1;
    std::cout << "Enter the Number:";
    std::cin >> num;
    std::cout << "Enter the power:";
    std::cin >> power;
    for(int i=1;i<=power;i++)
    {
        rnum*=num;
    }
    std::cout <<"The Number : "<< rnum;
    return 0;
}
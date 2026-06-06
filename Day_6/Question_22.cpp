// To convert Binary into Decimal
#include<iostream>
#include<cmath>
 int main()
 {
    int binary,num=0,temp,count=0;
    std::cout << "Enter the Binary Number to convret it into Decimal:";
    std::cin >> binary;
    for(int i=binary;i>0;i=i/10)
    {
        temp=i%10;
        num = num + temp*pow(2,count);
        count++;
    }
    std::cout << "The Decimal Number : "<< num;
    return 0;
 }
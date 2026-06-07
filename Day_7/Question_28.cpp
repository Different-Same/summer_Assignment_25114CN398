//to Recursive reverse number
#include<iostream>
#include<cmath>
int reversenum(int num, int size);
int main()
{
    int num,reverse;
    std::cout << "Enter the Number to Reverse the Digit:";
    std::cin >> num;
    int size=0;
    for(int i=num;i>0;i=i/10)
    {
        size++;
    }
    reverse= reversenum(num,size);
    std::cout << "The Reverse of " << num << " : "<<reverse;
    return 0;
}
int reversenum(int num,int size)
{
    int rem=num%10;
    if(num==0)
    {return 0;}
    return rem*pow(10,size-1)+reversenum(num/10,size-1);
}

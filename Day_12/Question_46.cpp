//  to Write function for Armstrong
#include<iostream>
#include<cmath>
int arm(int x);
int main()
{
    int num,result;
    std::cout << "Enter the Number TO check whether it is armstrong or not :";
    std::cin >> num;
    result=arm(num);
     std::cout << result << '\n';
    if(result == num)
    {
        std::cout << num << " is Armstrong Number";
    }
    else 
    {
         std::cout << num << " is not Armstrong Number";
    }
    return 0;
}
int arm(int x)
{
    int size=0,an=0,temp;
    for(int i=x;i>0;i=i/10)
    {
        size++;
    }
    for(int j=x;j>0;j=j/10)
    {
        temp=j%10;
        an+=round(pow(temp,size));
    }
    return an;
}
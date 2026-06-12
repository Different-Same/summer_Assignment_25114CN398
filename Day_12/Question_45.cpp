// To check number whether is palindrome or not
#include<iostream>
int palin(int x);
int main()
{
    int num,result;
    std::cout << "Enter the Number to check whether it is palindrome or not :";
    std::cin >> num;
    result=palin(num);
    if(result == num)
    {
        std::cout << "The Number is palindrome";
    }
    else
    {
        std::cout << "The Number is not palindrome";
    }
    return 0;
}
int palin(int x)
{
    int rev=0,temp;
    for(int j=x;j>0;j=j/10)
    {
        temp=j%10;
        rev=rev*10+temp;
    }
    return rev;
}
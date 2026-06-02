// Factorial of a Number
#include<stdio.h>
int main()
{
    int x,fact=1;
    printf("Enter the Number for Factorial:");
    scanf("%d",&x);
    printf("The Factorial of %d : \n",x);
    for(int i=1;i<=x;i++)
    {
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}

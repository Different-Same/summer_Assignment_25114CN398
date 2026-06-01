// Factorial of a Number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number for Factorial:");
    scanf("%d",&x);
    printf("The Factorial of %d : \n",x);
    for(int i=0;i<=x;i++)
    {
        printf("%d \t",i);
    }
    return 0;
}
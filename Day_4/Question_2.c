// Find nth Fibonacci term
#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the first term for Fibonacci series:");
    scanf("%d",&a);
    printf("Enter the second term for Fibonacci series:");
    scanf("%d",&b);
    printf("The Nth place:");
    scanf("%d",&n);
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The Nth term: %d",c);
    return 0;
}
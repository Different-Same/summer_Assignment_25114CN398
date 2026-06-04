// to Generate Fibonacci series
#include<stdio.h>
int main()
{
    int a,b,n,c=0;
    printf("Enter the First term of the fibonacci series:");
    scanf("%d",&a);
    printf("Enter the Second term of the fibonacci series:");
    scanf("%d",&b);
    printf("How many term in the series ? \n");
    scanf("%d",&n);
    printf("The series:\n %d\t %d\t",a,b);
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d \t",c);
    }
    return 0;
}
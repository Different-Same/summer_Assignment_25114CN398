// To find Factorial of Number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to find the Factor:");
    scanf("%d",&num);
    printf("The Factors of %d :\n",num);
    for(int i=1;i<=num;i++)
    if(num%i==0)
    {
        printf("%d ",i);
    }
    return 0;
}
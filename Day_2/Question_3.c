//Product of Digit
#include<stdio.h>
int main()
{
    int x,p=1,digit;
    printf("Enter the Number:");
    scanf("%d",&x);
    for(int i=x;i>0;i=i/10)
    {
        digit=i%10;
        p=p*digit;
    }
    printf("The Product of %d : %d",x,p);
    return 0;
}
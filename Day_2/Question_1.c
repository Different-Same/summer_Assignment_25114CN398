// Sum of Digit of Number
#include<stdio.h>
int main()
{
    int x,Digit,sum=0;
    printf("Enter the Number:");
    scanf("%d",&x);
    for(int i=x;i>0;i=i/10)
    {
        Digit=i%10;
        sum=sum+Digit;
    }
    printf("The Sum of the Digit of %d : %d",x,sum);
    return 0;
}
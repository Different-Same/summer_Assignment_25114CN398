//Check whether a number is Palindromic or not
#include<stdio.h>
int main()
{
    int x,digit,rn=0;
    printf("Enter the Number:");
    scanf("%d",&x);
    for(int i=x;i>0;i=i/10)
    {
        digit=i%10,
        rn=rn*10+digit;
    }
    if(x==rn)
    {
        printf("The Number %d is Palindromic number",x);
    }
    else
    {
        printf("the Number %d is not Palindromic number",x);
    }
    return 0;
}
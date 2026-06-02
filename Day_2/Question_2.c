//Reverse the Number
#include<stdio.h>
int main()
{
    int x,digit;
    int rn=0;
    printf("Enter the Number:");
    scanf("%d",&x);
    for(int i=x;i>0;i=i/10)
    {
        digit=i%10;
        rn= rn*10+digit;
    }
    printf("The Reverse of the %d : %d",x,rn);
    return 0;
}
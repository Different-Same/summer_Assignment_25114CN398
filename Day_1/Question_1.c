//To find sum in given nth natural number
#include<stdio.h>
int main()
{
    int x;
    int sum=0;
    printf("Enter the Nth Number:");
    scanf("%d",&x);
    for(int i=0;i<=x;i++)
    {
        sum=sum+i;
    }
    printf("The Sum till %d term is %d",x,sum);
    return 0;
}
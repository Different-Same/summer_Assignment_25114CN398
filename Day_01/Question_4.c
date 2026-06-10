//To count Digit in Number
#include<stdio.h>
int main()
{
    int x,n=0;
    printf("Enter the Number to Count:");
    scanf("%d",&x);
    for(int i=x;i>0;i=i/10)
    {
        n=n+1;
    }
    printf("The Number of digit %d have: %d",x,n);
    return 0;
}
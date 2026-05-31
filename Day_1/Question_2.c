// Tp find table for given number
#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter the Number for table:");
    scanf("%d",&x);
    printf("Till where you want the table:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d * %d = %d \n",x,i,x*i);
    }
    return 0;
}
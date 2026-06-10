// To print prime number in given range
#include<stdio.h>
int main()
{
    int max,min,digit;
    printf("Enter the starting point of Series:");
    scanf("%d",&min);
    printf("Enter the Ending point of Series:");
    scanf("%d",&max);
    printf("THe series follow:\n");
    for(int i=min;i<=max;i++)
    {
        digit=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {digit++;}
        }
        if(digit==2)
        {printf("%d \t",i);}
    }
    return 0;
}
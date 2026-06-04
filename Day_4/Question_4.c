// to print armstrong number in range
#include<stdio.h>
#include<math.h>
int main()
{
    int min,max,n,digit;
    printf("Enter the Starting point of range:");
    scanf("%d",&min);
    printf("Enter the Ending point of range:");
    scanf("%d",&max);
    printf("The Armstrong Number between %d and %d :\n",min,max);
    for(int i=min;i<=max;i++)
    {
        int an=0;
        n=0;
        for(int k=i;k>0;k=k/10)
        {
            n++;
        }
        for(int j=i;j>0;j=j/10)
        {
            digit=j%10;
            an += pow(digit,n);
        }
        if(an==i)
        {printf("%d \t",an);}
    }
    return 0;
}
//to Find largest prime number
#include<stdio.h>
int main()
{
    int num,fac;
    printf("Enter the number to find largest prime number under:");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        fac=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
           { fac++;}
        }
        if(fac==2)
        {
            printf("The largest Prime number: %d",i);
            break;
        }
    }
    return 0;
}
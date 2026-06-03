//To check given number is prime or not
#include<stdio.h>
int main()
{
    int x,fac=0;
    printf("Enter the Number:");
    scanf("%d",&x);
   for(int i=1;i<=x;i++)
   {
    if(x%i==0)
    {
        fac++;
    }
   }
   if(fac==2)
   {printf("The Number %d is Prime",x);}
   else
   {printf("The Number %d is not Prime",x);}
    return 0;
}
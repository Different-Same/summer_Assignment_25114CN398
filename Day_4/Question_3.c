// To Check Armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int x,digit,n=0,an=0;
    printf("Enter the Number to check for Armstrong Number:");
    scanf("%d",&x);
    for(int i=x;i>0;i=i/10)
    {
        n++;
    }
   for(int j=x;j>0;j=j/10)
   {
    digit=j%10;
    an=an+ pow(digit,n);
   }
   if(x==an)
   {printf("The Number %d is Armstrong Number.",x);}
   else
   {printf("The Number %d is not Armstrong Number.",x);}
    return 0;
}
//GCD of two number
#include<stdio.h>
int main()
{
    int x,y,gcd=0;
    printf("Enter the First Number for GCD:");
    scanf("%d",&x);
    printf("Enter the Second Number for GCD:");
    scanf("%d",&y);
    for(int i=1;i<=y && i<=x;i++)
    //Could use Ternary operator to find min of both number and use it in loop
    {
        if(x%i==0 && y%i==0)
        {gcd=i;}
    }
    printf("The GCD of %d and %d : %d",x,y,gcd);
    return 0;
}
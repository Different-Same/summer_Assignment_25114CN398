//LCM of two number
#include<stdio.h>
int main()
{
    int x,y,max;
    printf("Enter the First Number to find LCM:");
    scanf("%d",&x);
    printf("Enter the Second Number to find LCM:");
    scanf("%d",&y);
    max=(x>y)?x:y;
    for (int i=max;;i++)
    {
        if(i%x==0 && i%y==0)
        {printf("The LCM of %d and %d : %d",x,y,i);
        break;}
    }
    return 0;
}
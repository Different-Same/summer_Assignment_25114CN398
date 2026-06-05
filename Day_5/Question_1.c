// To Print Perfect Number
#include<stdio.h>
int main()
{
    int num,sumnum=0;
    printf("Enter the Number to check if it is perfect or not :");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sumnum+=i;

        }
    }
    if(num==sumnum)
    {printf("It is a Perfect Number");}
    else
    {
        printf("It is not a perfect Number");
    }
        
    return 0;
}
// To check whether the number is strong or not
#include<stdio.h>
int main()
{
    int num,sumnum=0,innum,digit;
    printf("Enter the Number to check whether it is strong number or not:");
    scanf("%d",&num);
    for(int i=num;i>0;i=i/10)
    {
        digit=i%10;
        innum=1;
        for(int j =1;j<=digit;j++)
        {
            innum*=j;
        }
        sumnum+=innum;
    }
    if(num==sumnum)
    {
        printf("It is a Strong Number");
    }
    else
    {
        printf("It is not a strong Number");
    } 
    return 0;
}
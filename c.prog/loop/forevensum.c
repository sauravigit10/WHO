#include<stdio.h>
void main()
{
    int i=0,sum=0,rem,num;
    for(i=0;i<5;i++)
    {
        printf("enter a number\n");
        scanf("%d",&num);
        rem=num%2;
        if(rem==0)
        {
            sum=sum+num;
        }
    }
    printf("sum is %d",sum);
}
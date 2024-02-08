#include<stdio.h>
#include<conio.h>
void main()
{
    int month,days;
    printf("enter the totaldays\n");
    scanf("%d",&days);
    month=days/30;
    days=days%30;
    printf("days is %d month is%d",days,month);

}

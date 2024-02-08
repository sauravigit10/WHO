#include<stdio.h>
int main()
{
    int p,t,r,interest;
    printf("enter a value of p\n");
    scanf("%d",&p);
    printf("enter value of t\n");
    scanf("%d",&t);
    printf("enter value of r\n");
    scanf("%d",&r);
    interest=(p*t*r)/100;
    printf("%d",interest);
}
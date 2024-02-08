#include<stdio.h>
void main()
{
    int n,a,b,c,d,e,f,reverse;
    printf("enter six digit number\n");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    n=n/10;
    f=n%10;
    n=n/10;
    printf("reverse is %d%d%d%d%d%d",a,b,c,d,e,f);
}
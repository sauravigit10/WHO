#include<stdio.h>
void main()
{
    int a,b,c,d,e,n,sum;
printf("enter 5 digits number\n");
scanf("%d",&n);
a=n%10;
n=n/10;
b=b%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
n=n/10;
e=n%10;
n=n/10;
sum=a+b+c+d+e+n;
printf("the sum is %d",sum);
}
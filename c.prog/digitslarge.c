#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,l1,l2,largest;
    printf("enter the value of a/n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
    printf("enter the value of d\n");
    scanf("%d",&d);
    l1=a>b?a:b;
    l2=c>d?c:d;
    largest=l2>l1?l2:l1;
printf("largest is %d",largest);

}
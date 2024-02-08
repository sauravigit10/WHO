#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,largest;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    largest=a>b?a:b;
    printf("largest is %d",largest);

}

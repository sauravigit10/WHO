#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,power;
    printf("enter the value of base\n");
    scanf("%d",&a);
    printf("enter the value of power\n");
    scanf("%d",&b);
    power=pow(a,b);
    printf("power is %d",power);
    
}
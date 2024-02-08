#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,power;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("enter the power\n");
    scanf("%d",&y);
    power=pow(x,y);
    printf("power of number is %d",power);
}
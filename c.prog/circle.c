#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
    float r1,r2,a1,a2,a;
    printf("enter the radius r1\n");
    scanf("%f",&r1);
    printf("enter the radius r2\n");
    scanf("%f",&r2);
    a1=PI*r1*r1;
    a2=PI*r2*r2;
printf("the area of circle is %f",a1);
printf("the area of circle is %f",a2);
    a =a2-a1;
    printf("the area of concentric circle is %f",a);

}
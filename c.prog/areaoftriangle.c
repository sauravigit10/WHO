#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;
    printf("enter the value of a\n");
    scanf("%f",&a);
     printf("enter the value of b\n");
    scanf("%f",&b);
     printf("enter the value of c\n");
    scanf("%f",&c);
    s=(a+b+c)/2;
    printf("perimeter is %f",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is %f\n",area);
}
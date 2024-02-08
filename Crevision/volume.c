#include<stdio.h>
#define PI 3.14
void  main()
{
float r,vol;
printf("enter the radius");
scanf("%f",&r);
vol=4*(PI*r*r*r)/3;
printf("volume is %f",vol);
}
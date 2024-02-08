#include<stdio.h>
#include<math.h>
void main()
{
    int l,b,area,perimeter;
    printf("enter the length\n");
    scanf("%d",&l);
    printf("enter the bredth\n");
    scanf("%d",&b);
    area=l*b;
    printf("area is %d",area);
    perimeter=2*(l+b);
    printf("perimeter is %d",perimeter);
}
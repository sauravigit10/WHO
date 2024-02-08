#include<stdio.h>
void main()
{
    int dozen,one,n ,price;
    printf("enter the price of dozen mangoes\n");
    scanf("%d",&dozen);
    one=dozen/12;
    printf("one is%d",one);
    printf("enter any number \n");
    scanf("%d",n);
    price=one*n;
    printf("price is %d=%d %d",price,one,n);
}
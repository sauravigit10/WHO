#include<stdio.h>
vvoid main()
{
    int b=10,product;
    do{
int a=1;
    do{
        product=a*b;
        printf("%d*%d\n",a,b,product);
        a++;
    }
    while(a<=10);
    b++;
    }
    while(b<=20);
}
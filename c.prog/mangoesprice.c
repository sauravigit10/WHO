#include<stdio.h>
#include<math.h>

void main()
{
    float A,N1,price,N;
    printf("enter the price of dozen of mangoes A\n");
    scanf("%f",&A);
     N1=A/12;
    printf("%f/12=%f",A,N1);
    printf("enter any number N\n");
    scanf("%f",&N);
 price=N1*N;
    printf("%f*%f=%f",N,N1,price);
    
}
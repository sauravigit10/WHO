#include<stdio.h>

#include<conio.h>

void main()

{

int totalseconds , hours,minutes,seconds;

printf("Enter the totalseconds\n");

scanf("%d",&seconds);

totalseconds=seconds;

hours=seconds/3600;

seconds=seconds%3600;

minutes=seconds/60;

seconds=seconds%60;

printf("%d seconds=%d hours-%d minutes-%d seconds",totalseconds,hours,minutes,seconds);
}
#include<stdio.h>
void main()
{
    char name[20];
    printf("enter name:");
    scanf("%[^h]",name);
    printf("%s",name);
}
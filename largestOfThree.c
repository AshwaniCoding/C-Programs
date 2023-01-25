#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter three number:\n");
    scanf("%d %d %d",&a,&b,&c);
    /*printf("Enter second number:\n");
    scanf("%d",&b);
    printf("Enter third number:\n");
    scanf("%d",&c);*/
    if (a>b && a>c)
    {
        printf("%d is largest.",a);
    } 
    if (b>a && b>c)
    {
        printf("%d is largest.",b);
    }
    if (c>a && c>b)
    {
        printf("%d is largest.",c);
    }
}
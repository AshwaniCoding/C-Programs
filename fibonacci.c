#include<stdio.h>

int main(){
    int series,num,a=1,b=2;
    printf("Enter the number of fibonacci series you want:\n");
    scanf("%d",&num);
    printf("%d ",a);
    printf("%d ",b);
    for (int i = 3; i <= num; i++)
    {
        series=a+b;
        a=b;
        b=series;
        printf("%d ",series);
    }
    
}
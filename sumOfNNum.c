#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        sum=sum+i;
    }
    printf("Sum of first %d numbers is %d",num,sum);
    
}
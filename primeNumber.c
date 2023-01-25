#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    for (int i = 2; i <=num; i++)
    {
        if(num%i==1){
            printf("it is a prime number.");
            break;
        }
        else{ 
            printf("it is not a prime number."); 
            break;
        }
    }
    
}

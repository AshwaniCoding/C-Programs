#include<stdio.h>

int main(){
    int a[5],n,m,element;
    printf("Enter the number of values you want to enter:\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
    printf("Enter a number:\n");
    scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to insert:\n");
    scanf("%d",&m);
    printf("Enter the element you want to insert:\n");
    scanf("%d",&element);
    for(int j = n; j>=m ; j--)
    {
        a[j]=a[j-1];
        a[m-1]=element;
        n++;
    }
    for (int i = 0; i < sizeof(a); i++)
    {
        printf("%d ",a[i]);
    }
    
}
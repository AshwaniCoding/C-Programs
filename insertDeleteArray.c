#include<stdio.h>

void display(int [], int);
void insert(int [], int, int, int);
void delete(int [], int, int);

void main(){
    int a[20],n,delPos,m,p,opt,o;
    printf("Enter the size of Array:\n");
    scanf("%d",&n);
    printf("Enter the elements of Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Options:\nChoose 1 for Display Array\nChoose 2 for Insert Element into Array\nChoose 3 for Delete element from Array\n");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        display(a,n);
        break;
    
    case 2:
        printf("Enter the position of new element:\n");
        scanf("%d",&m);
        printf("Enter the new element:\n");
        scanf("%d",&p);
        printf("\n");
        insert(a,n,m-1,p);
        break;

    case 3:
        printf("Enter the element:\n");
        scanf("%d",&o);
        for (int i = 0; i < n; i++)
        {
            if (a[i]==o)
            {
                delPos=i;
                break;
            }            
        }
        delete(a,delPos,n);
        break;

    default:
        break;
    }
}

void display(int a[], int b){
    for (int i = 0; i < b; i++)
    {
        printf("%d ",a[i]);
    }
}

void insert(int a[],int b,int c,int d){
    for (int i = b; i >= c; i--)
    {
        a[i]=a[i-1];
    }
        a[c]=d;

    for (int i = 0; i < b; i++)
    {
        printf("%d ",a[i]);
    }
}

void delete(int a[], int position, int n){
    for (int i = position; i < n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    display(a,n);
}
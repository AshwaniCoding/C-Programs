#include<stdio.h>

void main(){
    float a,b,cons;
    printf("Enter number of units:\n");
    scanf("%f",&a);
    if (a<=200)
    {
        cons=a*0.50;
        //printf("Your unit consumption is %f\n",a);
        //printf("Your electricity bill is %0.2f\n",cons);
    }
    else if (a>=201 && a<=400)
    {
        b=a-200;
        cons=200*0.50+b*0.65;
        //printf("Your unit consumption is %f\n",a);
        //printf("Your electricity bill is %0.2f\n",cons);
    }
    else if (a>=401 && a<=600)
    {
        b=a-400;
        cons=200*0.50+200*0.65+b*0.80;
       // printf("Your unit consumption is %f\n",a);
        //printf("Your electricity bill is %0.2f\n",cons);
    }
    else
    {
        b=a-600;
        cons=200*0.50+200*0.65+200*0.80+b*1;
        //printf("Your unit consumption is %f\n",a);
        //printf("Your electricity bill is %0.2f\n",cons);
    }
        printf("Your unit consumption is %0.2f\n",a);
        printf("Your electricity bill is %0.2f\n",cons);
}
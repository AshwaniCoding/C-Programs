//Complex Number Addition, Multiplication & Division

#include<stdio.h>

void displayComplexNumber(float, float);

struct complexNumber
    {
        float realp;
        float imgp;
    };

struct complexNumber additionOfComplexNumbers(struct complexNumber s1,struct complexNumber s2){
    struct complexNumber result;
    result.realp=s1.realp+s2.realp;
    result.imgp=s1.imgp+s2.imgp;
    displayComplexNumber(result.realp,result.imgp);
}

struct complexNumber mulOfComplexNumber(struct complexNumber s1,struct complexNumber s2){
    struct complexNumber result;
    result.realp= s1.realp*s2.realp - s1.imgp*s2.imgp;
    result.imgp=s1.realp*s2.imgp + s1.imgp*s2.realp;
    displayComplexNumber(result.realp,result.imgp);
}

struct complexNumber divComplexNumber(struct complexNumber s1,struct complexNumber s2){
    struct complexNumber result;
    result.realp = (s1.realp*s2.realp - s1.imgp*s2.imgp)/(s2.realp*s2.realp-s2.imgp*s2.imgp);
    result.imgp = (s1.realp*s2.imgp + s1.imgp*s2.realp)/(s2.realp*s2.realp-s2.imgp*s2.imgp);
    displayComplexNumber(result.realp,result.imgp);
}

int main(){
    int opt;
    struct complexNumber s1,s2;
    printf("Enter first complex number(real & imaginary part):\n");
    scanf("%f %f",&s1.realp,&s1.imgp);
    printf("Enter second complex number(real & imaginary part):\n");
    scanf("%f %f",&s2.realp,&s2.imgp);
    printf("Options:\nEnter 1 for Addiition\nEnter 2 for Multiplication\nEnter 3 for Division\n");
    scanf("%d",&opt);
    if (opt==1)
    {
        additionOfComplexNumbers(s1,s2);
    }
    else if(opt==2){
        mulOfComplexNumber(s1,s2);
    }
    else if(opt==3){
        divComplexNumber(s1,s2);
    }
    else{
        printf("Invalid Input, Try Again!!!");
    }
}

void displayComplexNumber(float r, float i){
    if (i>0)
    {
     printf("%0.1f + i%0.1f",r,i);   
    }
    else{
        i=-i;
        printf("%0.1f - i%0.1f",r,i);
    }
}

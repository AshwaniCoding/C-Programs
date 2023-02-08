#include<stdio.h>
#include<math.h>

struct point
{
    float x;
    float y;
};

struct point distance(struct point p1,struct point p2){
    float dx =p2.x-p1.x;
    float dy =p2.y-p1.y;
    float d = sqrt(dx*dx + dy*dy);
    printf("Distance is %0.2f\n",d);
}

int main(){
    struct point p1,p2;
    printf("Enter first point(x & y)\n");
    scanf("%f %f",&p1.x,&p1.y);
    printf("Enter second point(x & y)\n");
    scanf("%f %f",&p2.x,&p2.y);
    distance(p1,p2);
}
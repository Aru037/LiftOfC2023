#include<stdio.h>
int main()
{
    float r;
    printf("enter the radius of circle: ");
    scanf("%f",&r);
    float diameter,area,circum;
    diameter= 2*r;
    area= 4*(3.14)*r*r;
    circum= 2*(3.14)*r;
    printf("area of circle = %f\n",area);
    printf("diameter of circle = %f\n",diameter);
    printf("circumference of circle = %f\n",circum);
    return 0;
}
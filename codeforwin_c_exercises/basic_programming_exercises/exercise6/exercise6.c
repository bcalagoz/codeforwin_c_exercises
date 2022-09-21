/*
Write a C program to input radius of a circle from user 
and find diameter, circumference and area of the circle. 
How to calculate diameter, circumference and area of 
a circle whose radius is given by user in C programming. 
Logic to find diameter, circumference and area of a circle in C.
*/

#include<stdio.h>
#define PI 3.14
int main(){

    float r;
    float R,circ,area;

    printf("Enter radius:");
    scanf("%f",&r);

    R = 2 * r;
    circ = 2 * PI * r;
    area = PI * r * r;

    printf("Diameter:%.1f\n",R);
    printf("Circumference:%.1f\n",circ);
    printf("Area:%.2f\n",area);

    return 0;
}
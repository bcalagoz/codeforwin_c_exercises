/*
Write a C program to input radius of circle from user and find diameter, circumference and area of the given circle using function. 
How to find diameter, circumference and area of a circle using function in C programming.
*/

#include<stdio.h>

#define PI 3.142857

double findDiameter(double);
double findCircumference(double);
double findArea(double);

int main(){

    double radius;

    printf("Enter radius:");
    scanf("%lf",&radius);

    printf("Diameter = %.2lf\n",findDiameter(radius));
    printf("Circumference = %.2lf\n",findCircumference(radius));
    printf("Area = %.2lf\n",findArea(radius));

    return 0;
}

double findDiameter(double x){
    return x * 2;
}

double findCircumference(double x){
    return 2 * PI * x;
}

double findArea(double x){
    return PI * x * x;
}
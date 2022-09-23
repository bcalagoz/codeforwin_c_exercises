/*
Write a C program to input base and height of a triangle 
and find area of the given triangle. How to find 
area of a triangle in C programming. 
Logic to find area of a triangle in C program.
*/

#include<stdio.h>

int main(){
    float x , h , a;

    printf("Enter base:");
    scanf("%f",&x);

    printf("Enter height:");
    scanf("%f",&h);

    a = (x * h) / 2;

    printf("Area of triangle = %.2f\n",a);


    return 0;
}
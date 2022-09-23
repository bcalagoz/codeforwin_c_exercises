/*
Write a C program to input side of an equilateral 
triangle from user and find area of the given triangle. 
How to find area of an equilateral triangle in C programming. 
C program to calculate area of an equilateral triangle if its side is given.
*/

#include<stdio.h>
#include<math.h>

int main(){

    float x , area;

    printf("Enter side of the equilateral triangle:");
    scanf("%f",&x);

    area = (sqrt(3) / 4) * pow(x,2);

    printf("Area of equilateral triangle = %.2f\n",area);

    return 0;
}
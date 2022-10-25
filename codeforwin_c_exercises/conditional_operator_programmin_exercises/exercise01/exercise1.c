/*
Write a C program to input two numbers and find 
maximum between two numbers using conditional/ternary 
operator ?:. How to find maximum or minimum between two numbers 
using conditional operator in C program.
*/

#include<stdio.h>

int main(){

    float x , y ;

    printf("Enter two numbers:");
    scanf("%f %f",&x,&y);

    x>y ? printf("Maximum= %.2f",x) : printf("Maximum= %.2f",y);

    return 0;
}
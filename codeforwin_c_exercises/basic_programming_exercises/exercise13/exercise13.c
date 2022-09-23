/*
Write a C Program to input two angles from user and find third angle of the triangle.
How to find all angles of a triangle
if two angles are given by user using C programming.
C program to calculate the third angle of a triangle if two angles are given.
*/

#include<stdio.h>

int main(){

    int fAng , sAng , tAng;

    printf("Enter first angle:");
    scanf("%d",&fAng);

    printf("Enter second angle:");
    scanf("%d",&sAng);

    tAng = 180 - (fAng + sAng) ;

    printf("Third angle = %d\n",tAng); 

    return 0;
}

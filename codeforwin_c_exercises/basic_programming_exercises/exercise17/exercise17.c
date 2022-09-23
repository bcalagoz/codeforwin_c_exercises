/*
Write a C program to input principle, time and rate (P, T, R) 
from user and find Simple Interest. How to calculate simple 
interest in C programming. Logic to find simple interest in C program.
*/

#include<stdio.h>

int main(){

    float p,t,r,i;

    printf("Enter principle:");
    scanf("%f",&p);

    printf("Enter time:");
    scanf("%f",&t);

    printf("Enter rate:");
    scanf("%f",&r);

    i = (p * t * r) / 100;

    printf("Simple Interest = %f\n",i);

    return 0;
}
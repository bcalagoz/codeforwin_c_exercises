/*
Write a C program to input principle (amount), 
time and rate (P, T, R) and find Compound Interest. 
How to calculate compound interest in C programming. 
Logic to calculate compound interest in C program.
*/

#include<stdio.h>
#include<math.h>

int main(){

    float p , t , r , CI ;

    printf("Enter principle:");
    scanf("%f",&p);

    printf("Enter time:");
    scanf("%f",&t);

    printf("Enter rate:");
    scanf("%f",&r);

    CI = p * pow(1 + (r / 100) , t);

    printf("Compound Interest = %f\n", CI);

    return 0;
}

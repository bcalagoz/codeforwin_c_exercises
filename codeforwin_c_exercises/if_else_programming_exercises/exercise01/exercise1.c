/*
Write a C program to find maximum between two numbers using if else. 
C program to input two numbers from user and find maximum between two numbers using if else. 
How to find maximum or minimum between two numbers using if else in C programming.
*/

#include<stdio.h>

int main(){

    float num1,num2;

    printf("Enter two numbers:");
    scanf("%f %f",&num1,&num2);

    if (num1 > num2) printf("Maximum = %.2f\n",num1);
    if (num2 > num1) printf("Maximum = %.2f\n",num2);
    if (num2 == num1) printf("%.2f = %.2f\n",num1,num2);


    return 0;
}

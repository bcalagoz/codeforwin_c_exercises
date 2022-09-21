/*
Write a C program to input two numbers from user 
and calculate their sum. C program to add two numbers 
and display their sum as output. How to add two numbers in C programming.
*/
#include<stdio.h>

int main(){

    int num1,num2;
    int sum;

    printf("Enter two integers:");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;

    printf("Sum:%d\n",sum);


    return 0;
}

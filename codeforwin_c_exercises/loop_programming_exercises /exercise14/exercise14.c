/*
Write a C program to input a number and calculate sum of digits using for loop. 
How to find sum of digits of a number in C program. 
Logic to find sum of digits of a given number in C programming.
*/

#include<stdio.h>

int main(){

    int num;
    int sum = 0;

    printf("Enter Number:");
    scanf("%d",&num);

    while (num != 0)
    {
        sum = (num % 10) + sum;

        num /= 10;
    }
    
    printf("Sum of digits: %d\n",sum);

    return 0;
}
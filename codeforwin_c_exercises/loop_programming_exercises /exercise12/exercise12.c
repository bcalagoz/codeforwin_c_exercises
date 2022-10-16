/*
Write a C program to input a number and find sum of first and last digit of the number using for loop. 
How to find sum of first and last digit of a number in C programming using loop. 
Logic to find sum of first and last digit of a number without using loop in C program.
*/

#include<stdio.h>

int main(){

    int num,first,last;

    printf("Enter Number:");
    scanf("%d",&num);

    last = num % 10;
    first = num;

    while (first >= 10)
    {
        first /= 10;
    }
    
    printf("Sum of first and last digit: %d\n",first + last);

    return 0;
}
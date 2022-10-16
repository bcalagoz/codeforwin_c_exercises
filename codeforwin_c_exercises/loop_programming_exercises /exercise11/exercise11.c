/*
Write a C program to input a number from user and find first and last digit of number using loop. 
How to find first and last digit of a number in C programming. 
Logic to find first and last digit of a given number without using loop in C program.
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
    
    printf("First Digit: %d\n",first);
    printf("Last Digit: %d\n",last);

    return 0;
}
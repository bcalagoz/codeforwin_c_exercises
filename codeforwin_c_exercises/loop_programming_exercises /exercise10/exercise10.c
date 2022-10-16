/*
Write a C program to input a number from user and count number of digits in the given integer using loop. 
How to find total digits in a given integer using loop in C programming. 
Logic to count digits in a given integer without using loop in C program.
*/

#include<stdio.h>

int main(){

    int num;
    int digit = 0;

    printf("Enter Number:");
    scanf("%d",&num);

    for ( ; num != 0; num /= 10)
    {
        digit += 1;
    }

    printf("Number of digits: %d\n",digit);

    return 0;
}

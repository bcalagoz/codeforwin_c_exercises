/*
Write a C program to input a number from user and calculate product of its digits. 
How to find product of digits of a number using loop in C programming. 
Logic to find product of digits of a given number in C program.
*/

#include<stdio.h>

int main(){

    int num;
    int sum = 1;

    printf("Enter Number:");
    scanf("%d",&num);

    while (num != 0)
    {
        sum = (num % 10) * sum;

        num /= 10;
    }
    
    printf("Product of digits: %d\n",sum);

    return 0;
}
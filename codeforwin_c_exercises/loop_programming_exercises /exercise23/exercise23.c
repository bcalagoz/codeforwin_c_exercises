/*
Write a C program to input a number and calculate its factorial using for loop. 
How to find factorial of a number in C program using loop. 
Logic to find factorial of a number in C programming.
*/

#include<stdio.h>

int main(){

    int num;
    int fac = 1;

    printf("Enter a number:");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    
    printf("Factorial: %d\n",fac);

    return 0;
}


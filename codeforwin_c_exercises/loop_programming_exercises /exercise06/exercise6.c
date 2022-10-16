/*
Write a C program to find the sum of all natural numbers between 1 to n using for loop. 
How to find sum of natural numbers in a given range in C programming. 
Logic to find sum of all natural numbers in a given range in C programming.
*/

#include<stdio.h>

int main(){

    int limit;
    int sum = 0;

    printf("Enter Limit:");
    scanf("%d",&limit);

    for (int i = 0; i <= limit; i++)
    {
        sum += i;
    }
    
    printf("Sum of natural numbers 1 to %d: %d\n",limit,sum);

    return 0;
}
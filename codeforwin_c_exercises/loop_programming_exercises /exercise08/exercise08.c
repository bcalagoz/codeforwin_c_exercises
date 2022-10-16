/*
Write a C program to find sum of all odd numbers from 1 to n using for loop. 
How to find sum of all odd numbers in a given range in C programming. 
Logic to find sum of odd numbers in a given range using loop in C programming.
*/

#include<stdio.h>

int main(){

    int limit;
    int sum = 0;

    printf("Enter Limit:");
    scanf("%d",&limit);

    for (int i = 0; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        
    }
    
    printf("Sum of odd numbers 1 to %d: %d\n",limit,sum);

    return 0;
}
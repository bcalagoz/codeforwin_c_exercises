/*
Write a C program to input number from user and find sum of all even numbers between 1 to n.
How to find sum of even numbers in a given range using loop in C programming. 
Logic to find sum of even numbers in a given range in C program.
*/

#include<stdio.h>

int main(){

    int limit;
    int sum = 0;

    printf("Enter Limit:");
    scanf("%d",&limit);

    for (int i = 0; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        
    }
    
    printf("Sum of even numbers 1 to %d: %d\n",limit,sum);

    return 0;
}
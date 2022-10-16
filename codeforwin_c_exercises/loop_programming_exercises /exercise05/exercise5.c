/*
Write a C program to print all odd numbers from 1 to n using for loop. 
How to print odd numbers from 1 to n using loop in C programming. 
Logic to print odd numbers in a given range in C programming.
*/

#include<stdio.h>

int main(){

    int limit;

    printf("Enter Limit:");
    scanf("%d",&limit);

    printf("Odd numbers between 1 to %d: ",limit);

    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d,",i);
        }
        
    }

    return 0;
}
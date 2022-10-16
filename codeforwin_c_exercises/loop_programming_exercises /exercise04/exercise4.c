/*
Write a C program to print all even numbers from 1 to n using for loop. 
C program to generate all even numbers between given range. 
Logic to print even numbers using if else and for loop in given range in C programming.
*/

#include<stdio.h>

int main(){

    int range;

    printf("Enter range: ");
    scanf("%d",&range);

    printf("Even numbers between 1 to %d : ",range);

    for (int i = 1; i <= range; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d,",i);
        }
        
    }
    
    return 0;
}
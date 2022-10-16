/*
Write a C program to print Fibonacci series up to n terms using loop. 
How to generate Fibonacci series up to n terms using loops in C programming. 
Logic to print Fibonacci series in a given range in C programming.
*/

#include<stdio.h>

int main(){

    int term,num1,num2,sum;

    printf("Enter number of terms:");
    scanf("%d",&term); 

    num1 = 0;
    num2 = 1;
    sum = 0;

    printf("Fibonacci series:\n");
   
    for (int i = 1; i <= term; i++)
    {
        printf(" %d,",sum);
        num1 = num2;
        num2 = sum;
        sum = num1 + num2;
    }

    return 0;
}
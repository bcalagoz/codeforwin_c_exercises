/*
Write a C program to input a number and check whether 
number is even or odd using Conditional/Ternary operator ?:. 
How to check even or odd numbers using conditional operator in C program.
*/

#include<stdio.h>

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    (num % 2 == 0) ? printf("%d is an EVEN number.\n",num) : printf("%d is an ODD number.\n",num);


    return 0;
}
/*
Write a C program to print alphabets from a to z using for loop. 
How to print alphabets using loop in C programming. 
Logic to print alphabets from a to z using for loop in C programming.
*/

#include<stdio.h>

int main(){

    printf("Alphabets: ");

    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%c,",i);
    }

    return 0;
}
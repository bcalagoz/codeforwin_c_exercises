/*
Write a C program to check leap year using if else. 
How to check whether a given year is leap year or not 
in C programming. C Program to input year from user and 
check whether the given year is leap year or not using ladder 
if else. Logic to check leap year in C programming.
*/

#include<stdio.h>

int main(){

    int year;

    printf("Enter a year:");
    scanf("%d",&year);

    if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("%d is leap year.",year);
    }
    else if (year % 400 == 0)
    {
        printf("%d is leap year.",year);
    }
    else 
    {
        printf("%d is not leap year.",year);
    }
    

    return 0;
}
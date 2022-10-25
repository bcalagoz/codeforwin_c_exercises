/*
Write a C program to input a year and check whether 
year is leap year or not using conditional/ternary operator ?:. 
How to check leap year using conditional operator in C programming.
*/

#include<stdio.h>

int main(){

    int year;

    printf("Enter a year:");
    scanf("%d",&year);

    (year % 4 == 0 && year % 100 != 0)? printf("LEAP Year") : (year % 400 == 0) ?  printf("LEAP Year") : printf("COMMON Year");
    
    return 0;
}
/*
Write a C program to enter month number between(1-12) 
and print number of days in month using if else. 
How to print number of days in a given month using if else in C programming. 
Logic to find number of days in a month in C program.
*/

#include<stdio.h>

int main(){

    int num;

    printf("Enter a month number:");
    scanf("%d",&num);

    if ((num == 1)||(num == 3)||(num == 5)||(num == 7)||(num == 8)||(num == 10)||(num == 12) )
    {
        printf("It contains 31 days.\n");
    } 
    else if((num == 4)||(num == 6)||(num == 9)||(num == 11))
    {
        printf("It contains 30 days.\n");
    }
    else if(num == 2)
    {
        printf("It contains 28/29 days.\n");
    }
    else
    {
        printf("Unvalid number.\n");
    }

    return 0;
}
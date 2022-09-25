/*
Write a C program to input week number(1-7) and print the corresponding 
day of week name using if else. How to print day of week using if else in 
C programming. Logic to convert week number to day of week in C programming.
*/
#include<stdio.h>

int main(){

    int x;

    printf("Enter a week number:");
    scanf("%d",&x);

    if (x == 1)
    {
        printf("Monday\n");
    }
    else if (x == 2)
    {
        printf("Tueasday\n");
    }
     else if (x == 3)
    {
        printf("Wednesday\n");
    }
     else if (x == 4)
    {
        printf("Thursday\n");
    }
     else if (x == 5)
    {
        printf("Friday\n");
    }
     else if (x == 6)
    {
        printf("Saturday\n");
    }
     else if (x == 7)
    {
        printf("Sunday\n");
    }
    else
    {
        printf("Not valid number.\n");
    }
    
    

    return 0;
}
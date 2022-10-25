/*
Write a C program to input month number and print total number of days in month using switch...case. 
C program to find total number of days in a month using switch...case. 
Logic to print number of days in a month using switch...case in C programming.
*/

#include<stdio.h>

int main(){

    int num;

    printf("Enter Month Number:");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Total number of days : 31\n");
        break;
    case 2:
        printf("Total number of days : 28/29\n");
        break;
    case 3:
        printf("Total number of days : 31\n");
        break;
    case 4:
        printf("Total number of days : 30\n");
        break;
    case 5:
        printf("Total number of days : 31\n");
        break;
    case 6:
        printf("Total number of days : 30\n");
        break;
    case 7:
        printf("Total number of days : 31\n");
        break;
    case 8:
        printf("Total number of days : 31\n");
        break;
    case 9:
        printf("Total number of days : 30\n");
        break;   
    case 10:
        printf("Total number of days : 31\n");
        break;
    case 11:
        printf("Total number of days : 30\n");
        break;
    case 12:
        printf("Total number of days : 31\n");
        break;
    default:
        printf("Not Valid Number!\n");
        break;
    }


    return 0;
}
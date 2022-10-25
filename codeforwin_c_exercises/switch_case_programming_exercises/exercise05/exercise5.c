/*
Write a C program to input number from user and check whether the number is even or odd using switch case. 
How to check even or odd using switch case in C programming. 
Logic to check whether a number is even or odd using switch case in C program.
*/

#include<stdio.h>

int main(){

    int num;

    printf("Enter any number:");
    scanf("%d",&num);

    switch (num % 2)
    {
    case 0:
        printf("%d is EVEN number.\n",num);
        break;
    
    case 1:
        printf("%d is ODD number.\n",num);
        break;
    }

    return 0;
}
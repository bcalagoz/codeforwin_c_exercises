/*
Write a C program to find maximum between three numbers using ladder if else or nested if.
 How to find maximum or minimum between three numbers using if else in 
 C programming. Logic to find maximum or minimum between three numbers in C program.
*/

#include<stdio.h>

int main(){

    int num1 , num2 , num3;

    printf("Enter three number:");
    scanf("%d %d %d",&num1,&num2,&num3);

    if (num1>num2 && num1>num3)
    {
        printf("Maximum : %d\n",num1);
    }
    else if (num2>num3)
    {
        printf("Maximum : %d\n",num2);
    }
    else {
        printf("Maximum : %d\n",num3);
    }
    
    return 0;
}
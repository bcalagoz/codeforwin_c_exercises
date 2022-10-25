/*
Write a C program to check whether a number is divisible 
by 5 and 11 or not using if else. How to check divisibility 
of any number in C programming. C program to enter any number 
and check whether it is divisible by 5 and 11 or not. Logic to 
check divisibility of a number in C program.
*/

#include<stdio.h>

int main(){

    int num;

    printf("Enter any number:");
    scanf("%d",&num);

    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("%d is divisible by 5 and 11\n",num);
    }
    else{
        printf("%d is not divisible by 5 and 11\n",num);
    }



    return 0;
}
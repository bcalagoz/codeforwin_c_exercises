/*
Write a C program to input a number from user and find reverse of the given number using for loop. 
How to find reverse of any number using loop in C program. 
Logic to find reverse of a number in C programming.
*/

#include<stdio.h>

int main(){

    int num,temp;
    int reverse = 0;

    printf("Enter Number:");
    scanf("%d",&num);
    temp = num;
    
    while (temp != 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    printf("Reverse of %d = %d\n",num,reverse);

    return 0;
}
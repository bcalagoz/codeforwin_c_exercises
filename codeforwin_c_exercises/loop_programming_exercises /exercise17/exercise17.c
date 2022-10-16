/*
Write a C program to input number from user and check number is palindrome or not using loop. 
How to check whether a number is palindrome or not using loop in C programming. 
Logic to check palindrome number in C programming.
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

    if (num == reverse)
    {
        printf("%d is palindrome\n",num);
    }
    else
    {
        printf("%d is NOT palindrome\n",num);
    }
    
    return 0;
}
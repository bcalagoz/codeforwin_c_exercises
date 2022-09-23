/*
Write a C program to input a character from user and check whether 
the given character is alphabet or not using if else. How to check 
whether a character is alphabet or not in C programming. Logic to 
check if a character is alphabet or not in C program.
*/

#include<stdio.h>

int main(){

    char anyChar;

    printf("Enter any character:");
    scanf("%c",&anyChar);

    if ((anyChar <= 'z' && anyChar >= 'a') || (anyChar <= 'Z' && anyChar >= 'A'))
    {
        printf("%c is alphabet",anyChar);
    }
    else
    {
        printf("%c is not alphabet",anyChar);
    }
    

    return 0;
}
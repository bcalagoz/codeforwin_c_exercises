/*
Write a C program to input character from user and check 
whether character is uppercase or lowercase alphabet using if else. 
How to check uppercase and lowercase using if else in C programming. 
Logic to check uppercase and lowercase alphabets in C program.
*/

#include<stdio.h>

int main(){

    char ch;

    printf("Enter any character:");
    scanf("%c",&ch);

    if ((ch <= 'Z') && (ch >= 'A'))
    {
        printf("%c is uppercase alphabet",ch);
    }
    else if ((ch <= 'z') && (ch >= 'a'))
    {
        printf("%c is lowercase alphabet",ch);
    }
    else
    {
        printf("%c is not alphabet",ch);
    }
    

    return 0;
}

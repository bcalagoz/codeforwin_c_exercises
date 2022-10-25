/*
Write a C program to input a character and check whether the 
character is alphabet or not using Conditional/Ternary operator ?:. 
How to check alphabets using conditional operator in C programming.
*/

#include<stdio.h>

int main(){

    char x;

    printf("Enter any character:");
    scanf("%c",&x);

    (x>='a'&& x<='z') || (x>='A'&& x<='Z') 
    ? puts("ALPHABET") 
    : puts("not ALPHABET");

    return 0;
}
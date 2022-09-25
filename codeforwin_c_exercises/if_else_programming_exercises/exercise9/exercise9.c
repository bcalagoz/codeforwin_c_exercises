/*
Write a C program to input a character from user and check whether 
given character is alphabet, digit or special character using if else. 
How to check if a character is alphabet, digits or any other special 
character using if else in C programming. Logic to check alphabet, 
digit or special character in C programming.
*/

#include<stdio.h>

int main(){

    char ch;

    printf("Enter any character:");
    scanf("%c",&ch);

    if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
    {
        printf("%c is alphabet.\n",ch);
    }
    else if (ch <= '9' && ch >= '0')
    {
        printf("%c is digit.\n",ch);
    }
    else
    {
        printf("%c is special character.\n",ch);
    }
    


    
    return 0;
}
/*
Write a C program to check whether an alphabet is vowel 
or consonant using if else. How to check vowels and consonants 
using if else in C programming. C Program to input a character from 
user and check whether it is vowel or consonant. Logic to check vowel or consonant in C programming.
*/

#include<stdio.h>

int main(){

    char ch;

    printf("Enter any character:");
    scanf("%c",&ch);


    if ((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')||(ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'O')||(ch == 'U'))
    {
        printf("%c is vowel.",ch);
    }
    else if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
    {
        printf("%c is consonant.",ch);
    }
    else
    {
        printf("%c is not alphabet.",ch);
    }
    
    




    return 0;
}
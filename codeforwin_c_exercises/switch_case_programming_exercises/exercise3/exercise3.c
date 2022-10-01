/*
Write a C program to input an alphabet and check whether it is vowel or consonant using switch case. 
C program to check vowel or consonant using switch case. Logic to check vowel or consonant using switch case.
*/

#include<stdio.h>

int main(){

    char ch;

    printf("Enter any character:");
    scanf("%c",&ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a VOWEL\n",ch);
            break;
        default:
            printf("%c is a consonant\n",ch);
            break;
        }
    }
    else
    {
        printf("Not Alphabet!\n");
    }
    

    return 0;
}
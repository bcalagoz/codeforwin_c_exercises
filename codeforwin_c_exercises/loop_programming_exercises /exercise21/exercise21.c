/*
Write a C program to find power of a number using for loop. 
How to find power of a number without using built in library functions in C program. 
Logic to find power of any number without using pow() function in C programming.
*/

#include<stdio.h>

int main(){

    int base,exponent;
    int result = 1;

    printf("Enter Base:");
    scanf("%d",&base);

    printf("Enter Exponent:");
    scanf("%d",&exponent);

    for (int i = 1; i <= exponent; i++)
    {
        result *= base; 
    }

    printf("%d ^ %d = %d\n",base,exponent,result);
    
    return 0;
}
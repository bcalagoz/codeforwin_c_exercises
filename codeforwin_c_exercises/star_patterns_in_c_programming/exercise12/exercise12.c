/*
Write a C program to print inverted right triangle star pattern series using for loop. 
How to print inverted right triangle star pattern series of n rows in C programming. 
Logic to print inverted right triangle star pattern in C programming.

*****
****
***
**
*
*/

#include<stdio.h>

int main(){

    int rows;

    printf("Enter rows:");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int k = i; k <= rows; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
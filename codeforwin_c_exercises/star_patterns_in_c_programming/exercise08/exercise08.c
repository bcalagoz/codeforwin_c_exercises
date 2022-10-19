/*
Write a C program to print right triangle star pattern series using for loop. 
How to print right triangle star pattern series of n rows in C programming. 
Logic to print right triangle star pattern in C.
*
**
***
****
*****
*/

#include<stdio.h>

int main(){

    int rows;

    printf("Enter rows:");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= i ; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
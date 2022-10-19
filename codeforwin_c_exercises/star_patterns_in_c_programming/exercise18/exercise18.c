/*
Write a C program to print reverse Pyramid or reverse equilateral triangle star pattern series using for loop. 
How to print inverted pyramid or inverted equilateral triangle star pattern series in C program. 
Logic to print reverse pyramid star pattern series in C programming.

*********
 *******
  *****
   ***
    *
*/

#include<stdio.h>

int main(){

    int rows;

    printf("Enter rows:");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2*rows)-(2*i-1); j++)
        {
            printf("*");
        }
    
        printf("\n");
    }
    
    return 0;
}
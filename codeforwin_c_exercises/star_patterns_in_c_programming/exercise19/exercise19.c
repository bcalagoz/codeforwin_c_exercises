/*
Write a C program print hollow inverted pyramid star pattern series of n rows using for loop. 
How to print hollow inverted equilateral triangle star pattern series of n rows in C program. 
Logic to print hollow inverted pyramid star pattern in C programming.

*********
 *     *
  *   *
   * *
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
            if (j == 1|| j == (2*rows)-(2*i-1) || i == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
    
        printf("\n");
    }
    
    return 0;
}

/*
Write a C program to print mirrored right triangle star pattern series using for loop. 
How to print right triangle star pattern series with trailing spaces of n rows using for loop in C program. 
Logic to print mirrored right triangle star pattern series in C programming.

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
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
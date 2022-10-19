/*
Write a C program to print hollow mirrored right triangle star pattern of n rows using for loop. 
How to print hollow mirrored right triangle star pattern series using for loop in C program. 
Logic to print hollow mirrored right triangle star pattern in C programming.

    *
   **
  * *
 *  *
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
            if (i == 1 || i == rows || k == 1 || k == i )
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
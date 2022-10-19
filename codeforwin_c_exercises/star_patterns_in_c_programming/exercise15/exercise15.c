/*
Write a C program to print hollow mirrored inverted right triangle star pattern series of n rows using for loop. 
How to print hollow mirrored inverted right triangle star pattern in C program. 
Logic to print hollow mirrored inverted right triangle star pattern in C programming.

*****
 *  *
  * *
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
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (int k = i; k <= rows; k++)
        {
            if (i == 1 || i == k || k == rows) 
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
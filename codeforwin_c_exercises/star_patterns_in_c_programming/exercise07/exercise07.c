/*
Write a C program to print hollow mirrored rhombus star pattern series of N rows using for loop. 
How to print hollow mirrored rhombus or parallelogram star pattern series in C program. 
Logic to print hollow inverted rhombus or parallelogram star pattern using loop in C programming.
*****
 *   *
  *   *
   *   *
    *****
*/

#include<stdio.h>

int main(){

    int rows;

    printf("Input number of rows: ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j < i ; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        puts("");
    }
     
    return 0;
}
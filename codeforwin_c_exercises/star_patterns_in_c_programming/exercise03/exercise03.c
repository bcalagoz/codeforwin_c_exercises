/*
Write a C program to print hollow square star pattern with diagonal using loops. 
How to print hollow square star pattern with diagonals in C program. 
Logic to print hollow square star pattern with diagonal in C programming.

*****
** **
* * *
** **
*****
*/

#include<stdio.h>

int main(){

    int rows;

    printf("Input number of rows: ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows || i == j || j == (rows - i + 1))
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
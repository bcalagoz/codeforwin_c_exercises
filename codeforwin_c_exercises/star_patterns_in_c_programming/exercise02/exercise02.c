/*
Write a C program to print hollow square or rectangle star(*) pattern series using for loop. 
How to print hollow square or rectangle star pattern of N rows using for loop in C programming. 
Logic to print empty square or rectangle star pattern in C program.
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
/*
Write a C program to print hollow rhombus star series pattern using for loop. 
How to print hollow rhombus or parallelogram star pattern in C programming. 
Logic to print empty rhombus or parallelogram star pattern series in C programming.
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
        for (int j = 1; j <= rows - i; j++)
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
/*
Write a C program to print rhombus star pattern of N rows using for loop. 
How to print rhombus or parallelogram star pattern using for loop in C programming. 
Logic to print rhombus or parallelogram star pattern series in C program.
    *****
   *****
  *****
 *****
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
            printf("*");
        }
        
        puts("");
    }
     
    return 0;
}
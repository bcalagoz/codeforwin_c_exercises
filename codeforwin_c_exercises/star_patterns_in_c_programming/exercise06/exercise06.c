/*
Write a C program to print inverted/mirrored rhombus star pattern series using for loop. 
How to print inverted/mirrored rhombus or parallelogram star pattern of N rows in C program. 
Logic to print mirrored rhombus or parallelogram star pattern series in C programming.
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
        for (int j = 1; j < i ; j++)
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
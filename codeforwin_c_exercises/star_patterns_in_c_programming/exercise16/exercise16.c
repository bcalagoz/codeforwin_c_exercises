/*
Write a C program to print equilateral triangle or Pyramid star pattern series of n rows using for loop. 
How to print Pyramid star pattern series in C program. 
Logic to print pyramid star pattern series in C programming.
    *
   ***
  *****
 *******
*********
*/

#include<stdio.h>

int main(){

    int rows;

    printf("Enter rows:");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= ( 2 * i - 1 ); k++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}

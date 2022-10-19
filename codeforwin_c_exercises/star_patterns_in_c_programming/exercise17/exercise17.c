/*
Write a C program to print hollow pyramid or hollow equilateral triangle star pattern series using for loop. 
How to print hollow pyramid star pattern series in C program. 
Logic to print hollow pyramid star pattern series in C programming.
    *
   * *
  *   *
 *     *
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
            if (i == 1 || i == rows || k == 1 || k == (2*i-1))
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

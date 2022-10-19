/*
Write a C program to print X star pattern series using loop. 
How to print the X star pattern series using for loop in C program. 
Logic to print X using stars in C programming.

*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
*/

#include<stdio.h>

int main(){

    int n;

    printf("Enter rows:");
    scanf("%d",&n);

    for (int i = 1; i <= (n*2-1); i++)
    {
        for (int j = 1; j <= (n*2-1); j++)
        {
            if (i == j || j == ((2*n-1)-i+1))
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
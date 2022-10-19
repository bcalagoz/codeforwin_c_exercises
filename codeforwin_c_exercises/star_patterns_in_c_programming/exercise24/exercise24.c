/*
Write a C program to print right arrow star pattern series using for loop. 
How to print right arrow star pattern structure in C program. 
Logic to print right arrow star pattern in C programming.
*****
  ****
    ***
      **
        *
      **
    ***
  ****
*****
*/

#include<stdio.h>

int main(){

    int n;

    printf("Enter rows:");
    scanf("%d",&n);

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= (i*2-2); j++)
        {
            printf(" ");
        }

        for (int j = i; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2*n - 2*i); j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

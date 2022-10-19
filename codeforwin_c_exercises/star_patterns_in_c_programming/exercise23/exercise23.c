/*
Write a C program to print hollow diamond star pattern series of n rows using for loop. 
How to print hollow diamond star pattern structure in C program. 
Logic to print hollow diamond star pattern in C programming.

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include<stdio.h>

int main(){

    int n;

    printf("Enter rows:");
    scanf("%d",&n);
    
   for (int i = 1; i <= n; i++)
   {

    for (int j = i; j <= n; j++)
    {
        printf("*");
    }

    for (int j = 1; j <= (i * 2 - 2); j++)
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
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        for (int j = (i * 2 - 2); j < (n * 2 - 2); j++)
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
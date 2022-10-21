/*
Write a C program to print heart star pattern using for loop. 
,How to print heart star pattern in C program. 
Logic to print heart shape star pattern in C programming.

  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/

#include<stdio.h>

int main(){

    int n;

    printf("Enter rows:");
    scanf("%d",&n);

    for (int i = n/2; i <= n; i+=2)
    {
        for (int j = 1; j < n-i; j+=2)
        {
            printf(" ");
        }

        for (int j = 1 ; j <= i; j++)
        {
            printf("*");
        }

        for (int j = i; j <= n; j++)
        {
            printf(" ");
        }

        for (int j = 1 ; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (i*2-1); j++)
        {
            printf("*");
        }

        printf("\n");
        
    }
    
    return 0;
}
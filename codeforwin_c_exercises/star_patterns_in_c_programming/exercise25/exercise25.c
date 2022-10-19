/*
Write a C program to print left arrow star pattern series using for loop. 
How to print left arrow (mirrored arrow) star pattern structure in C program. 
Logic to print left arrow star pattern in C programming.

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
        for (int j = 1; j <= (n-i); j++)
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
        for (int j = 0; j <= (i-1); j++)
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
/*
Write a C program to print diamond star pattern series using for loop. 
How to print diamond star pattern structure in C program. 
Logic to print diamond star pattern series in C programming.

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<stdio.h>

int main(){

    int n,spaces,star;

    printf("Enter rows:");
    scanf("%d",&n);
    
    spaces = n - 1;
    star = 1;
    
    for (int i = 1; i < (n * 2); i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for (int k = 1; k < star * 2; k++)
        {
            printf("*");
        }

        printf("\n");
        
        if (i < n)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
        
    }
     
    return 0;
}

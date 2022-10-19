/*
Write a C program to print the mirrored half diamond star pattern using for loop. 
How to print mirrored half diamond star pattern in C program. 
Logic to print mirrored half diamond star pattern in C programming.

    *
   **
  ***
 ****
*****
 ****
  ***
   **
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

        for (int k = 1; k <= star ; k++)
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
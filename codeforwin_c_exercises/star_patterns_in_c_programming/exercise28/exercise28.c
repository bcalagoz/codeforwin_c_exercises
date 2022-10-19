/*
Write a C program to print 8 star pattern series using loop. 
How to print 8 star pattern series using for loop in C program. 
Logic to print 8 star pattern series of N columns in C programming.

 ***
*   *
*   *
*   *
 ***
*   *
*   *
*   *
 ***
*/

#include<stdio.h>

int main(){

    int n;

    printf("Enter rows:");
    scanf("%d",&n);

    for (int i = 1; i <= (2*n-1) ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if((i==1 && (j==1 || j==n)) || (i==n && (j==1 || j==n)) || (i==n*2-1 && (j==1 || j==n)))
            {
                printf(" ");
            }
            else if(i==1 || i==n || i==(n*2)-1 || j==1 || j==n)
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
/*
Write a C program to print plus star pattern series using for loop. 
How to print plus star pattern series using loop in C program. 
Logic to print plus star pattern in C programming.

    +
    +
    +
    +
+++++++++
    +
    +
    +
    +
*/

#include<stdio.h>

int main(){

    int n;

    printf("Enter rows:");
    scanf("%d",&n);

    for (int i = 1; i <= (2*n-1); i++)
    {
        if (i == n)
        {
            for (int j = 1; j <= (2*n-1); j++)
            {
                printf("+");
            }
        }
        else
        {
            for (int j = 1; j <= (n-1); j++)
            {
                printf(" ");
            }
            printf("+");
        }
         
        printf("\n");
    }

    return 0;
}

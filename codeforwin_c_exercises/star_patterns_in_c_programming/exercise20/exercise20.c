/*
Write a C program to print the half diamond star pattern using for loop. 
How to print half diamond star pattern structure using for loop in C program. 
Logic to print half diamond star pattern series in C programming.

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

    int rows;
    int colums = 1;

    printf("Enter rows:");
    scanf("%d",&rows);

    for (int i = 1; i < (rows * 2); i++)
    {
        for (int j = 1; j <= colums; j++)
        {
           printf("*"); 
        }
        if (i < rows)
        {
            colums++;
        }
        else
        {
            colums--;
        }

        printf("\n");
    }

    return 0;
}
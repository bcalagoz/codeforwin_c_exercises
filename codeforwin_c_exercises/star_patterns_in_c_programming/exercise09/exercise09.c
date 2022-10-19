/*
Write a C program to print hollow right triangle star pattern series using for loop. 
How to print hollow right triangle star pattern series of n rows using for loop in C programming. 
Logic to print hollow right triangle star pattern series in C programming.
*
**
* *
*  *
*****
*/

#include<stdio.h>

int main(){

    int rows;

    printf("Enter rows:");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= i ; k++)
        {
            if (i == 1 || i == rows || k == 1 || k == i )
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
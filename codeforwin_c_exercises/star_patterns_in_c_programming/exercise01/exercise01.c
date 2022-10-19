/*
Write a C program to print square star(*) pattern series of N rows. 
C program to print rectangle star(*) pattern in C of N rows and M columns. 
Logic to print square or rectangle star pattern of N rows in C programming.

*****
*****
*****
*****
*****
*/

#include<stdio.h>

int main(){

    int rows;

    printf("Input number of rows: ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            printf("*");
        }
        
        puts("");
    }
     
    return 0;
}
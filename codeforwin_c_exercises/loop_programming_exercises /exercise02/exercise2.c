/*
Write a C program to print all natural numbers in reverse from n to 1 using for loop. 
How to print natural numbers in reverse order in C programming.
 Logic to print natural numbers in reverse for a given range in C program.
*/

#include<stdio.h>

int main(){

    int limit;

    printf("Enter limit :");
    scanf("%d",&limit);

    printf("Natural numbers from 10-1 in reverse: ");

    for (int i = limit; i != 0; i--)
    {
        printf("%d ",i);
    }

    return 0;
}
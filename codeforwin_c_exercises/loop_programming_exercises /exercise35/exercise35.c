/*
Write a C program to print Strong numbers between 1 to n.
C program to print all strong numbers between a given range. 
Logic to print strong numbers in a given range in C program.
*/

#include<stdio.h>

int main(){

    int limit,sum,lastDigit,temp;
    long fac;

    printf("Enter limit:");
    scanf("%d",&limit);

    printf("All Strong numbers between 1 to %d are:\n", limit);

    for (int i = 1; i <= limit; i++)
    {
        temp = i;
        sum = 0;
        for (; temp != 0; temp /= 10)
        {
            lastDigit = temp % 10;

            fac = 1;

            for (int j = lastDigit; j != 0; j--)
            {
                fac *= j;
            }

            sum += fac;
            
        }

        if (i == sum)
        {
            printf(" %d,",i);
        }
        
    }
    
    return 0;
}
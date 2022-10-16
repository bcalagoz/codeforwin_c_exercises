/*
Write a C program to find all Perfect numbers between 1 to n. 
C program to find all perfect numbers between given range. 
How to generate all perfect numbers between given interval using loop in C programming. 
Logic to find all perfect numbers in a given range in C programming.
*/

#include<stdio.h>

int main(){

    int limit;
    int sum;

    printf("Enter a number:");
    scanf("%d",&limit);

    printf("All Perfect numbers between 1 to %d:\n", limit);

    for (int k = 1; k <= limit; k++)
    {
        sum = 0;

        for (int i = 1; i < k; i++)
        {
            if (k % i == 0)
            {
                sum += i;
            }
        
        }

        if (k == sum)
        {
            printf(" %d,",k);
        }

    }
    
    return 0;
}
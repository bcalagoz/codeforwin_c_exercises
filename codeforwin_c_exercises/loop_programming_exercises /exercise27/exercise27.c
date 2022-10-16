/*
Write a C program to print all Prime numbers between 1 to n using loop. 
How to print all prime numbers between given interval using loop in C program. 
Logic to print prime numbers in a given range in C program.
*/

#include<stdio.h>

int main(){

    int lower,upper,isPrime;

    printf("Enter lower limit:");
    scanf("%d",&lower);

    printf("Enter upper limit:");
    scanf("%d",&upper);

    printf("All prime numbers between %d to %d are:\n",lower,upper);

    if (lower<2)
    {
        lower = 2;
    }
    
    for (int i = lower; i <= upper; i++)
    {
        isPrime = 1;

        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime==1)
        {
            printf("%d, ", i);
        }

    }
    
    return 0;
}
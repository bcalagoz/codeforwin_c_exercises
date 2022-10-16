/*
Write a C program to find sum of all prime numbers between 1 to n using for loop. 
C program to generate sum of all primes between a given range. 
Logic to find sum of prime numbers in a given range.
*/

#include<stdio.h>

int main(){

    int upper,isPrime;
    int sum = 0;

    printf("Enter upper limit:");
    scanf("%d",&upper);

    for (int i = 2; i <= upper; i++)
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
            sum += i;
        }

    }
    
    printf("Sum of prime numbers between 1-%d: %d\n",upper,sum);

    return 0;
}
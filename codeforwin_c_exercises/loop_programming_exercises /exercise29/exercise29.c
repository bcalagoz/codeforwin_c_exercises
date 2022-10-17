/*
Write a C program to input a number from user and find Prime factors of the given number using loop. 
C program to list all prime factors of a given number. 
Logic to find prime factors of a number in C programming.
*/

#include<stdio.h>

int main(){

    int num,isPrime;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("All Prime Factors of %d are: \n", num);

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
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
            
            if (isPrime == 1)
            {
            printf("%d, ",i);
            }
        }
    }
    
    return 0;
}
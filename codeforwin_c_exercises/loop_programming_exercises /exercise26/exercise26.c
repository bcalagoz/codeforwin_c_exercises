/*
Write a program in C to input a number and check whether the number is prime number or not using for loop. 
How to check prime numbers using loop in C programming. 
Logic to check prime numbers in C programming.
*/

#include<stdio.h>

int main(){

    int num;
    int isPrime = 1;

    printf("Enter a number:");
    scanf("%d",&num);

    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
           isPrime = 0; 
           break;
        }
        
    }
    
    if(isPrime == 1 && num > 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is composite number", num);
    }

    return 0;
}
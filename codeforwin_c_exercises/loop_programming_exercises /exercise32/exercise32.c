/*
Write a C program to input a number and check whether the number is Perfect number or not. 
How to check perfect number in C programming using loop. 
Logic to check perfect number in C programming.
*/

#include<stdio.h>

int main(){

    int num;
    int sum = 0;

    printf("Enter a number:");
    scanf("%d",&num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
        
    }

    if (num == sum)
    {
        printf("%d is PERFECT NUMBER.\n",num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER.\n",num);
    }
    
    return 0;
}
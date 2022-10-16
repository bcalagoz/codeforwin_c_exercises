/*
Write a C program to input two numbers from user and find LCM (Lowest Common Multiple) using loop. 
How to find LCM of two given numbers in C programming. 
Logic to find LCM of two number in C program.
*/

#include<stdio.h>

int main(){

    int num1,num2,max,i;
    int lcm = 1;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    max = (num1>num2) ? num1 : num2 ;
    
    i = max;

    while (1)
    {
        if (i % num1 ==0 && i % num2 ==0)
        {
        lcm = i;
        break;
        }

        i += max;
    }
  
    printf("HCF of %d and %d: %d\n",num1,num2,lcm);
    
    return 0;
}
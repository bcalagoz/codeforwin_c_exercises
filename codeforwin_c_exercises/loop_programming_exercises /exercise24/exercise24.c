/*
Write a C program input two numbers from user and find the HCF using for loop. 
How to find GCD of two given numbers using loops in C programming. 
Logic to find HCF of two number in C programming.
*/

#include<stdio.h>

int main(){

    int num1,num2,min;
    int hcf = 1;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    min = (num1<num2) ? num1 : num2 ;

    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
        
    }
    
    printf("HCF of %d and %d: %d\n",num1,num2,hcf);
    
    return 0;
}
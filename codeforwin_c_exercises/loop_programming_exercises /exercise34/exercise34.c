/*
Write a C program to input number from user and check whether number is Strong number or not. 
How to check strong numbers using loop in C programming. 
Logic to check strong number in C programming.
Strong number is a special number whose sum of factorial of digits is equal to the original number.
*/

#include<stdio.h>

int main(){

    int num,lastDigit,temp,fac;
    int sum = 0;

    printf("Enter a number:");
    scanf("%d",&num);

    temp = num;

    for (; temp != 0; temp /= 10)
    {
        lastDigit = temp % 10;

        fac = 1;

        for (int i = lastDigit ; 0 != i ; i--)
        {
            fac = fac * i;
        }
        
        sum += fac;
    }
    
    if (num == sum)
    {
        printf("%d is STRONG NUMBER\n",num);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER\n",num);
    }
    
    return 0;
}

/*
Write a recursive function in C programming to calculate sum of digits of a number. 
How to calculate sum of digits of a given number using recursion in C program. 
Logic to find sum of digits using recursion in C programming.
*/

#include<stdio.h>

int sum_digits(int x);

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("Sum of digits of %d = %d\n",num,sum_digits(num));

    return 0;
}

int sum_digits(int x){
    if (x==0)
        return 0;
    
    return (x%10) + sum_digits(x/10);
}
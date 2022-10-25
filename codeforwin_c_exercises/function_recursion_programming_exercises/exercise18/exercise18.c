/*
Write a recursive function in C to find factorial of a number. 
How to find factorial of a number using recursion in C program. 
Logic to find factorial of a number using recursion in C programming.
*/

#include<stdio.h>

unsigned long long factorial(int x);

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("Factorial of %d = %llu\n",num,factorial(num));


    return 0;
}

unsigned long long factorial(int x){
    if (x == 0 || x== 1)
        return 1;

    return x * factorial(x-1);      
}
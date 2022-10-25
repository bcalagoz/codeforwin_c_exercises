/*
Write a recursive function to generate nth fibonacci term in C programming. 
How to generate nth fibonacci term in C programming using recursion. 
Logic to find nth Fibonacci term using recursion in C programming.
*/

#include<stdio.h>

int fibonacci(int x);

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("%dth Fibonacci term: %d\n",num,fibonacci(num));


    return 0;
}

int fibonacci(int x){
    if(x==0)
        return 0;
    else if(x==1)
        return 1;    
    return fibonacci(x-1) + fibonacci(x-2);  
}
/*
Write a recursive function in C to find GCD (HCF) of two numbers. 
How to find GCD(Greatest Common Divisor) or HCF(Highest Common Factor) of two numbers using recursion in C program. 
Logic to find HCF of two numbers using recursion in C programming.
*/

#include<stdio.h>

int get_hcf(int x,int y);

int main(){

    int num1,num2;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    printf("HCF of %d and %d = %d\n",num1,num2,get_hcf(num1,num2));

    return 0;
}

int get_hcf(int x,int y){
    if(y==0)
        return x;
    else
        return get_hcf(y,x%y);    

}
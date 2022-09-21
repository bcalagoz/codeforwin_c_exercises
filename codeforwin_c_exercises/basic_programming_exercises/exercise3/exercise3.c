/*
Write a C program to input two numbers and perform all arithmetic operations. 
C program to find sum, difference, product, quotient and modulus of two given numbers.
*/

#include<stdio.h>

int main(){
    
    int num1,num2;
    int sum,dif,product,mod;
    float quotient;
    
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("Sum:%d\n",sum);

    dif = num1 - num2;
    printf("Difference:%d\n",dif);

    product = num1 * num2;
    printf("Product:%d\n",product);

    quotient = (float)num1 / num2;
    printf("Quotient:%.2f\n",quotient);

    mod = num1 % num2;
    printf("Mod:%d\n",mod);

    return 0;
}
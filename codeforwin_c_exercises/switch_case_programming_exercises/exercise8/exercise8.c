/*
Write a C program to create menu driven calculator that performs basic 
arithmetic operations (add, subtract, multiply and divide) using switch case 
and functions. The calculator should input two numbers and an operator from user. 
It should perform operation according to the operator entered and must take input in given format.
*/

#include<stdio.h>

int main(){

    float num1 , num2 , result;
    char operator ;

    printf("Enter [number 1] [+ - * /] [number 2]\n");
    scanf("%f %c %f",&num1,&operator,&num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Not Valid Operator!");
        break;
    }

    printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);

    return 0;
}
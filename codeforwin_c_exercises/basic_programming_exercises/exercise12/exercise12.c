/*
Write a C program to input a number and find square root of the given number. 
How to find square root of a number in C programming 
using inbuilt sqrt() function. How to use predefined sqrt() function 
to find square root in C program.
*/

#include<stdio.h>
#include<math.h>

int main(){

    double x , root ;

    printf("Enter any number:");
    scanf("%lf",&x);

    root = sqrt(x);

    printf("Square root of %.2lf = %.2lf\n",x,root);


    return 0;
}
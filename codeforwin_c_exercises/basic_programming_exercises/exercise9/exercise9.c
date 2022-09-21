/*
Write a C program to input temperature in degree Fahrenheit 
and convert it to degree Centigrade. How to convert temperature 
from Fahrenheit to Celsius in C programming. C program for 
temperature conversion. Logic to convert temperature from 
Fahrenheit to Celsius in C program.
*/

#include<stdio.h>

int main(){

    float celsius,fahrenheit;

    printf("Enter temperature in degree Fahrenheit:");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit-32)*5/9;

    printf("%.2f Fahrenheit = %2.f Celsius",fahrenheit,celsius);

    return 0;
}
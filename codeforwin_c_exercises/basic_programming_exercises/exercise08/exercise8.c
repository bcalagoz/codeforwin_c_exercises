/*
Write a C program to input temperature in Centigrade 
and convert to Fahrenheit. How to convert temperature from degree 
centigrade to degree Fahrenheit in C programming. Logic to convert 
temperature from Celsius to Fahrenheit in C.
*/
#include<stdio.h>

int main(){

    float tempC,fah;

    printf("Enter temperature in Celsius:");
    scanf("%f",&tempC);

    fah = (tempC * 1.8) + 32;

    printf("Temperature in Fahrenheit:%.2f\n",fah);
    

    return 0;
}
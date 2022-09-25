/*
Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

How to calculate electricity bill using if else in C programming. 
Program to find electricity bill using if else in C. 
Logic to find net electricity bill in C program.
*/


#include<stdio.h>
int main(){

    float con,amount,total;

    printf("Enter electricity unit: ");
    scanf("%f",&con);

    if (con <= 50)
    {
        amount = con * 50;
    }
    else if (con > 50 && con <= 150)
    {
        amount = ((con - 50) * 0.75) + 25;
    }
    else if (con > 150 && con <= 250)
    {
        amount = ((con - 150) * 1.20) + 100;
    }
    else 
    {
        amount = ((con - 250) * 1.50) + 220;
    }
    
    
    total = amount + (amount * 0.20);
    printf("Electricity Bill : %.2f\n",total);

    return 0;
}
/*
Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
Basic Salary >= 20001 : HRA = 30%, DA = 95%

How to calculate gross salary of an employee using if else in C programming. 
Program to calculate gross salary of an employee using if else in C program.
Logic to find gross salary of employee in C program.
*/

#include<stdio.h>

int main(){

    float gross , hra , da , salary;

    printf("Enter salary:");
    scanf("%f",&salary);

    if (salary <= 10000)
    {
        da = salary * (80.0/100);
        hra = salary * (20.0/100);
        gross = salary + da + hra;
        printf("Gross salary :%.2f",gross);
    }
    else if (salary<=20000)
    {
        da = salary * (90.0/100);
        hra = salary * (25.0/100);
        gross = salary + da + hra;
        printf("Gross salary :%.2f",gross);
    }
    else
    {
        da = salary * (95.0/100);
        hra = salary * (30.0/100);
        gross = salary + da + hra;
        printf("Gross salary :%.2f",gross);
    }

    return 0;
}
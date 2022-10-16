/*
Write a C program to input a number from user and print it into words using for loop. 
How to display number in words using loop in C programming. 
Logic to print number in words in C programming.
*/

#include<stdio.h>

int main(void){

    long long num;
    int lastDigit,temp;
    int reverse = 0;


    printf("Enter a number:");
    scanf("%lld",&num);
    
    temp = num;
    
    while (temp != 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    for (; reverse != 0; reverse /= 10)
    {
        lastDigit = reverse % 10;
        switch (lastDigit)
        {
        case 0:
            printf("Zero ");
            break;
        
        case 1:
            printf("One ");
            break;
        
        case 2:
            printf("Two ");
            break;
        
        case 3:
            printf("Three ");
            break;
        
        case 4:
            printf("Four ");
            break;
        
        case 5:
            printf("Five ");
            break;
        
        case 6:
            printf("Six ");
            break;
        
        case 7:
            printf("Seven ");
            break;
        
        case 8:
            printf("Eight ");
            break;
        
        case 9:
            printf("Nine ");
            break;
        
        default:
            break;
        }
        
    }

    return 0;
}
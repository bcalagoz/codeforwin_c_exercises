/*
Write a C program to input a number from user and check whether given number is Armstrong number or not. 
How to check Armstrong numbers in C program. 
Logic to check Armstrong numbers in C programming.
*/

#include<stdio.h>
#include<math.h>

int main(){

    int num,temp1,temp2,valDigit;
    int digit = 0;
    int sum = 0;

    printf("Enter a number:");
    scanf("%d",&num);

    temp1 = num;

    for (; temp1 != 0; temp1 /= 10)
    {
        digit++;
    }

    temp2 = num;

    for (; temp2 != 0; temp2 /= 10)
    {
        valDigit = temp2 % 10;
        sum = sum + (pow(valDigit,digit));
    }
    
    if (num == sum)
    {
        printf("%d is armstrong number.\n",num);
    }
    else
    {
        printf("%d is NOT armstrong number.\n",num);
    }
    
    return 0;
}

/*
Write a C program to print all Armstrong numbers between 1 to n. 
How to print Armstrong numbers between given interval using loop in C program. 
Logic to print Armstrong numbers in given range in C programming.
*/

#include<stdio.h>
#include<math.h>

int main(){

    int num,temp1,temp2,valDigit,limit,i;
    int digit;
    int sum ;

    printf("Enter Limit:");
    scanf("%d",&limit);

    printf("Armstrong number between 1 to %d are:\n",limit);

    for (i = 1; i <= limit ; i++)
    {
        temp1 = i;
        digit = 0;

        for (; temp1 != 0; temp1 /= 10)
        {
            digit++;
        }

        temp2 = i;
        sum = 0;

        for (; temp2 != 0; temp2 /= 10)
        {
            valDigit = temp2 % 10;
            sum = sum + (pow(valDigit,digit));
        }
        
        if (i == sum)
        {
            printf(" %d,",i);
        }
    }

    return 0;
}

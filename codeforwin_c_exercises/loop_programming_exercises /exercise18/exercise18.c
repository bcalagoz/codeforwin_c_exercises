/*
Write a C program to count frequency of digits in a given number. 
How to find frequency of digits in a given number using loop in C programming. 
Logic to find total occurrences of each digits in a given number in C program.
*/

#include<stdio.h>

int main(void){

    long long num;
    int digit;
    int zero = 0,one = 0,two = 0,three = 0,four = 0,five = 0,six = 0,seven = 0,eight = 0,nine = 0;

    printf("Enter a number:");
    scanf("%lld",&num);

    for (; num != 0; num /= 10)
    {
        digit = num % 10;
        switch (digit)
        {
        case 0:
            zero++;
            break;
        
        case 1:
            one++;
            break;
        
        case 2:
            two++;
            break;
        
        case 3:
            three++;
            break;
        
        case 4:
            four++;
            break;
        
        case 5:
            five++;
            break;
        
        case 6:
            six++;
            break;
        
        case 7:
            seven++;
            break;
        
        case 8:
            eight++;
            break;
        
        case 9:
            nine++;
            break;
        
        default:
            break;
        }
        
    }

    printf("Frequency of 0 = %d\n",zero);
    printf("Frequency of 1 = %d\n",one);
    printf("Frequency of 2 = %d\n",two);
    printf("Frequency of 3 = %d\n",three);
    printf("Frequency of 4 = %d\n",four);
    printf("Frequency of 5 = %d\n",five);
    printf("Frequency of 6 = %d\n",six);
    printf("Frequency of 7 = %d\n",seven);
    printf("Frequency of 8 = %d\n",eight);
    printf("Frequency of 9 = %d\n",nine);

    return 0;
}
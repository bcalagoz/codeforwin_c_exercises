/*
Write a C program to check whether a number is prime, armstrong, perfect number or not using functions. 
How to check prime or armstrong or perfect number in C programming using functions.
*/

#include<stdio.h>
#include<math.h>

int isPrime(int);
int isArmstrong(int);
int isPerfect(int);

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    if (isPrime(num))
    {
        printf("%d is Prime number.\n",num);
    }
    else
    {
        printf("%d is NOT Prime number.\n",num);
    }
 

    if (isArmstrong(num))
    {
        printf("%d is Armstrong number.\n",num);
    }
    else
    {
        printf("%d is NOT Armstrong number.\n",num);
    }

    if (isPerfect(num))
    {
        printf("%d is Perfect number.\n",num);
    }
    else
    {
        printf("%d is NOT Perfect number.\n",num);
    }
    
    
    return 0;
}


int isPrime(int x){
    if (x > 1)
    {
        for (int i = 2; i <= x/2; i++)
            {
                if (x % i == 0)
                {
                return 0;
                }
            }
    
    return 1; 
    }
    
     return 0;
}

int isArmstrong(int x){
    int sum = 0;
    int lastDigit,temp,digits;

    temp = x;
    digits = (int) log10(x) + 1;
    

    while (temp > 0)
    {
        lastDigit = temp % 10;
        sum = sum + round(pow(lastDigit,digits));
        temp /= 10;
    }

    return (x == sum);
    
}

int isPerfect(int x){
    int sum,temp;
    
    sum = 0;
    temp = x;

    for (int i = 1; i < temp; i++)
    {
        if (temp % i == 0)
        {
            sum += i;
        }
        
    }
    return (x == sum);
}
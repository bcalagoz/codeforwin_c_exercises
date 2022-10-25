/*
Write a recursive function in C to check palindrome number. 
How to check whether a number is palindrome or not using recursion in C program. 
Logic to check palindrome number using recursion in C programming.
*/

#include<stdio.h>
#include<math.h>

int reverse_num(int x);
void palidrom_num(int x);

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    palidrom_num(num);

    return 0;
}

void palidrom_num(int x){
    if (x == reverse_num(x))
    {
        printf("%d is s palindrome number.",x);
    }
    else
    {
        printf("%d is NOT a palindrome number.",x);
    }
}

int reverse_num(int x){
    int digits = (int)log10(x);

    if (x == 0)
    {
        return 0;
    }

    return ((x%10)* pow(10,digits)) + reverse_num(x/10);
}
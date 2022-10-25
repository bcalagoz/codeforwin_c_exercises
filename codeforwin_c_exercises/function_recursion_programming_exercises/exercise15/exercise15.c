/*
Write a recursive function in C programming to find reverse of a number. 
How to find reverse of a number in C programming using recursion. 
Logic to find reverse of a number using recursion in C programming.
*/

#include<stdio.h>
#include<math.h>

int reverse_num(int x);

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);


    printf("Reverse of %d = %d",num,reverse_num(num));

    return 0;
}

int reverse_num(int x){
    int digits = (int)log10(x);

    if (x == 0)
    {
        return 0;
    }

    return ((x%10)* pow(10,digits)) + reverse_num(x/10);
}
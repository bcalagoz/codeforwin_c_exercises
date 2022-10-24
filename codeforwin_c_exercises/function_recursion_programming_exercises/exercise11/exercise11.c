/*
Write a recursive function in C programming to print all natural numbers between 1 to n. 
How to print all natural numbers from 1 to n using recursion in C program. 
Logic to print all natural numbers in given range using recursion in C programming.
*/

#include<stdio.h>

void print_natural_numbers(int x,int y);

int main(){

    int low,upp;
    

    printf("Enter lower limit:");
    scanf("%d",&low);

    printf("Enter upper limit:");
    scanf("%d",&upp);

    print_natural_numbers(low,upp);
    

    return 0;
}

void print_natural_numbers(int x,int y){
    if (x>y)
        return ;
    
    printf("%d,",x);
    print_natural_numbers(x+1,y);

}
/*
Write a recursive function in C programming to print all even or odd numbers between 1 to n. 
How to print all even numbers in given range using recursion in C programming.
Logic to print even/odd numbers in given range using recursion.
*/

#include<stdio.h>

void print_even_numbers(int x,int y);
void print_odd_numbers(int x,int y);

int main(){

    int low,upp;
    

    printf("Enter lower limit:");
    scanf("%d",&low);

    printf("Enter upper limit:");
    scanf("%d",&upp);

    printf("Even numbers between %d to %d: ",low,upp);
    print_even_numbers(low,upp);

    printf("\nOdd numbers between %d to %d: ",low,upp);
    print_odd_numbers(low,upp);
    

    return 0;
}

void print_even_numbers(int x,int y){
    if (x>y)
    {
        return ;
    }
    else if (x % 2 == 0)
    {
        printf("%d ,",x);
    }

    print_even_numbers(x+1,y);   
}

void print_odd_numbers(int x,int y){
    if (x>y)
    {
        return ;
    }
    else if (x % 2 != 0)
    {
        printf("%d ,",x);
    }

    print_odd_numbers(x+1,y);   
}




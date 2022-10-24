/*
Write a function in C programming to find prime numbers using function. 
How to find all prime numbers between two intervals using functions. 
Display all prime numbers between a given range using function in C programming.
*/

#include<stdio.h>

int isPrime(int);
void printPrimes(int,int);

int main(){

    int low,upp;

    printf("Enter lower limit:");
    scanf("%d",&low);

    printf("Enter upper limit:");
    scanf("%d",&upp);

    printPrimes(low,upp);
    return 0;
}


void printPrimes(int x,int y){
    printf("All prime number between %d to %d are: ", x, y);

    while (x<=y)
    {
        if (isPrime(x))
        {
            printf("%d,",x);
        }
        x++;
    }
}



int isPrime(int x){

    for (int i = 2; i <= x/2; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
    
}
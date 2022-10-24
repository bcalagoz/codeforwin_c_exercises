/*
Write a function to print all perfect numbers in a given interval in C programming. 
How to print all perfect numbers in a given range using functions in C program. 
C program to print all perfect numbers between 1 to n using functions.
*/

#include<stdio.h>
#include<math.h>

int isPerfect(int);
void printPerfect(int,int);


int main(){

    int low,upp;
    

    printf("Enter lower limit:");
    scanf("%d",&low);

    printf("Enter upper limit:");
    scanf("%d",&upp);

    printPerfect(low,upp);

    return 0;
}

void printPerfect(int x,int y){
    printf("Perfect numbers between %d to %d: ",x,y);

    while (x <= y)
    {
        if (isPerfect(x))
        {
            printf("%d ,",x);
        }
        x++;
    }
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

    if (x == sum)
    {
        return 1;
    }
    
    return 0;
}
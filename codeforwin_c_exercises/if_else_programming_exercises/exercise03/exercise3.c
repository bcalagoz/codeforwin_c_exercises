/*
Write a C program to check positive, negative or zero using simple if or if else. 
C program to input any number from user and check whether the given number is positive, 
negative or zero. Logic to check negative, positive or zero in C programming.
*/
 #include<stdio.h>

 int main(){
    
    int x;

    printf("Enter any number:");
    scanf("%d",&x);

    if (x>0)
    {
        printf("%d is positive.\n",x);
    }
    else if (x<0)
    {
        printf("%d is negative.\n",x);
    }
    else{
        printf("%d = 0\n",x);
    }
    
    return 0;
 }

/*
Write a C program to print heart star pattern with name in the center. 
How to print heart star pattern with the name in center using for loop in C programming. 
Program to print the below heart star pattern.

  *****     *****
 *******   *******
********* *********
*****Codeforwin****
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/

#include<stdio.h>
#include<string.h>

int main(){

    int n,len;
    char name[50];

    printf("Enter your name: ");
    gets(name);

    printf("Enter rows:");
    scanf("%d",&n);

    len = strlen(name);

    for (int i = n/2; i <= n; i+=2)
    {
        for (int j = 1; j < n-i; j+=2)
        {
            printf(" ");
        }

        for (int j = 1 ; j <= i; j++)
        {
            printf("*");
        }

        for (int j = i; j <= n; j++)
        {
            printf(" ");
        }

        for (int j = 1 ; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }


        if (i == n)
        {
            for (int j = 1; j <= (2*n-len)/2; j++)
            {
                printf("*");
            }
            
            printf("%s",name);

            for (int j = 1; j < (2*n-len)/2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= (i*2)-1; j++)
            {
                printf("*");
            }
        }
        
        printf("\n");
        
    }
    

return 0;
}
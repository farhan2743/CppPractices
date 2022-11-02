/* Write a program to input value of n and calculate how many numbers are factoials of n
 and find their sum*/




#include<stdio.h>
int main(int argc, char const *argv[])
{
   int factorial = 1 , i ,n, counter = 0;
   printf("Enter value of n :");
   scanf("%d",&n);
   for ( i = 1; i <= n; i++)
   {
    factorial *= i;
   
   }
   
   printf("\b\b = %d\n",factorial);
    return 0;
}
/* Write a program to input value of n and calculate how many numbers are divisible
 by 3 between 1 to n and finr their sum*/




#include<stdio.h>
int main(int argc, char const *argv[])
{
   int sum = 0 , i ,n, counter = 0;
   printf("Enter value of n :");
   scanf("%d",&n);
   for ( i = 3; i <= n; i=i+3)
   {
    sum = sum + i;
    counter ++;
    printf("%d + ",i);
   }
   
   printf("\b\b = %d\n",sum);
   printf("Total Number divisible by 3 is: %d\n",counter);
    return 0;
}
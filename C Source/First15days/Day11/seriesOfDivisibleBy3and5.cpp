/* Write a program to input value of n and calculate how many numbers are divisible
 by p and q between 1 to n and find their sum*/




#include<stdio.h>
int main(int argc, char const *argv[])
{
   int sum = 0 , i ,n, p, q, counter = 0;
   printf("Enter value of n:");
   scanf("%d",&n);
   printf("Enter value of p and q :");
   scanf("%d%d",&p,&q);
    
   for ( i = (p*q); i <= n; i+=(p*q))
   {
    sum +=i;
    counter ++;
    printf("%d + ",i);
   }
   
   printf("\b\b = %d\n",sum);
   printf("Total Number divisible by p and q is: %d\n",counter);
    return 0;
}
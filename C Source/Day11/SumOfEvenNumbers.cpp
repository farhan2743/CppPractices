/*
@Athur: 
@Date: 
# Problem: 
Sum of consecutive even numbers
f(N) = 2 + 4 + .....+n*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
   int sum = 0 , i ,n;
   printf("Enter value of n :");
   scanf("%d",&n);
   for ( i = 2; i <= n; i=i+2)
   {
    sum = sum + i;
   }
   printf("sum of even 2 to %d is %d\n",n,sum);
    return 0;
}

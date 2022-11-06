/*
@Athur: 
@Date: 
# Problem: 
Sum of consecutive natural numbers
f(N)= n + (n-1)+(n-2)....... +3+2+1
    = 1+2+3+4+.....+n*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
   int sum = 0 , i ,n;
   printf("Enter value of n :");
   scanf("%d",&n);
   for ( i = 1; i <= n; i++)
   {
    sum = sum + i;
   }
   printf("%d+%d-------------+3+2+1 = %d\n", n,(n-1),sum);
    return 0;
}

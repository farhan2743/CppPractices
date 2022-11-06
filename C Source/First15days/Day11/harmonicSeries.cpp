/*Write a program in C to display the n terms of harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
   double sum = 0 , i ,n;
   printf("Input the number of terms : :");
   scanf("%lf",&n);
   for ( i = 1; i <= n; i=i+1)
   {
    printf("1/%.0lf + ",i);
    sum = sum + 1.00/i;
   }
   printf("\nSum of Series upto 5 terms : %.2lf \n", sum);
    return 0;
}

/*
Write a program in C to display the n terms of square natural number and their sum.
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural numbers upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55
*/



#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int sum = 0,n ,i;
    printf("Input number of terms :");
    scanf("%d",&n);
     printf("The square natural numbers upto %d terms are :",n);
    for ( i = 1; i <= n; i++)
    {
        sum =sum +i*i;
        printf("%d ",i*i);
        
    }
    printf("\nThe Sum of Square Natural Number upto %d terms = %d",n,sum);
    
    return 0;
}

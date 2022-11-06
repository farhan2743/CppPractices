/*You are given an integer N then u have to input N integer real numbers
now u need to find the sum of odd numbers and sum of even numbers from those numbers*/
#include<stdio.h>
int main(){
    int n, num ,oddSum=0,evenSum=0,i;
    printf("Enter value of N : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)

    {
        scanf("%d",&num);
        num%2==0?evenSum+=num:oddSum+=num;    
            
            
            }
    printf("Sum of odd numbers : %d \nSum of even numbers : %d ",oddSum,evenSum);
}
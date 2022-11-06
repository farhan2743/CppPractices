/*Write a C program to input three numbers from user and find maximum between three numbers 
using conditional/ternary operator ( ?:) 

Example
Input
Input num1: 10 
Input num2: 20 
Input num3: 30 
Output
Maximum is 30*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num3,max;
    printf("Input num1:");
    scanf("%d",&num1);
    printf("Input num2:");
    scanf("%d",&num2);
    printf("Input num3:");
    scanf("%d",&num3);
    max = (num1>num2&&num1>num3)?num1:(num2>num1 && num2 >num3)?num2:num3;
    printf("Maximum number is %d\n",max);
    

    return 0;
}

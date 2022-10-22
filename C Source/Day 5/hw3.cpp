/*Write a C program to find maximum between three numbers using ladder if else or nested if. How to find 
maximum or minimum between three numbers using if else in C programming.

Input
Input num1: 10
Input num2: 20 
Input num3: 15

Output
Maximum is: 20*/

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Input num1 :");
    scanf("%d",&num1);
    printf("Input num2 :");
    scanf("%d",&num2);
    
    printf("Input num3 :");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
    printf("Maximum = %d",num1);
    }
    else if (num3>num2)

    {
        printf("Maximum = %d",num3);
    }
    else
    printf("Maximum = %d",num2);
    return 0;
}
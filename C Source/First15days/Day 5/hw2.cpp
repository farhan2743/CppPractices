/*Write a C program to find maximum between two numbers using if else. C program to input two 
numbers from user and find maximum between two numbers using if else.

Input

Input num1: 10
Input num2: 20

Output
Maximum = 20*/


#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Input num1:");
    scanf("%d",&num1);
    printf("Input num2:");
    scanf("%d",&num2);

    if (num1>num2)
    {
        printf("Maximum = %d",num1);
    }
    else 
    printf("Maximum = %d",num2);
    return 0;
}
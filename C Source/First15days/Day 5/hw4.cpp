/*Write a C program to check whether a number is divisible by 5 and 11 or not using if else.
 How to check divisibility of any number in C programming. C program to enter any number and 
 check whether it is divisible by 5 and 11 or not.

Input
Input number: 55

Output
Number is divisible by 5 and 11*/
#include<stdio.h>
int main()
{
    int number;
    printf("Input number: ");
    scanf("%d",&number);
    if (number%5==0)
    {  if (number%11==0)
    {
    printf("Number is  divisible by 5 and 11");
      }
    
       else  printf("Number is  not divisible by 5 and 11");
    }
    else 
    printf("Number is not divisible by 5 and 11 ");
    return 0;
}

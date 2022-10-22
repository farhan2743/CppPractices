/*Program to find the positive and negative number

Logic:
if number > 0,  The number is positive
For example: 4 > 0  so 4 is a positive number

if number < 0. The number is negative.
For example: -4 < 0  so -4 is a negative number*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number :");
    scanf("%d",&number);
    if (number>=0)
    {
        printf("The number is positive");
    }
    else 
    printf("The number is negative");
    return 0;
}

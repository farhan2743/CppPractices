/*Write a C program to enter month number between(1-12) and print number of days in month using if else. 

January, March, May, July, August, October, December ==> 31 days

February ==> 28/29 days

April, June, September, November ==> 30 days

Input
Enter month number: 1

Output
It contains 31 days.*/


#include"stdio.h"
int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d",&month);

    if (month%2==0)
    { if (month == 2)
    {
        printf("It contains 28 days.\n");
    }
    else
        printf("It contains 31 days.\n");
    }
    else
    
       printf("It contains 30 days.\n");
    
    return 0;
}


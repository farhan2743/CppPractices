/*Write a C program to input a year and check whether year is leap year or not using conditional/ternary operator ?:.

Example
Input
Input year: 2016 
Output
2016 is Leap Year*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  year;
    printf("Please enter a year :\n");
    scanf("%d",&year);

    (year%4==0 && year%100!=0) ? printf("%d is Leap Year ",year) :(year%400 ==0 ) ? printf("%d is Leap Year ",year) :
     printf("%d is not Leap Year ",year);
    return 0;
}



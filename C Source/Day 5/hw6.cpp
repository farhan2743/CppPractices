/*Write a C program to enter month number between(1-12) and print number of days in month using if else. 

January, March, May, July, August, October, December ==> 31 days

February ==> 28/29 days

April, June, September, November ==> 30 days
01) JAN----31
02) FEB----28/29
03) MAR-----31
04) APR------30
05) MAY------31
06) JUN------30
07) JUL------31
08) AUG ------31
09) SEP-------30
10) OCT-=------31
11) NOV--------30
12) DEC--------31

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

    if (month==1 || month==3 || month== 5 || month==7 || month == 8 || month ==10 || month== 12)
    {
       printf("It contains 31 days.\n");
    }
    else if (month == 2){
        printf("It contains 28/29 days.\n");
    }
    else if(month==4 || month==6 || month== 9 || month==11) {
        printf("It contains 30 days.\n");
    } 
    else
        printf("Invalid input\n");
    
    
    return 0;
}


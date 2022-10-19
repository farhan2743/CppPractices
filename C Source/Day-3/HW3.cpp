/*Ex-3: Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3*/


#include<stdio.h>
int main(){
    printf("Enter number of days:");
    int days,year,week,day,y;
    scanf("%d",&days);
    year = (days / 365);
    week = (days % 365) / 7;
    day = (days % 365) %7;

      
    printf("Years = %d\n", year);
    printf("Weeks =%d\n",week);
    printf("Days = %d\n",day);

}

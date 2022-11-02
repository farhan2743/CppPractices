/*Write a C program to check enter week number and print
 day of week using conditional operator.


Enter any week number (1-7): 1 
Monday 

Enter any week number (1-7): 3 
Wednesday 

Enter any week number (1-7): 5 
Friday*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int week;
    printf("Enter any week number (1-7): ");
    scanf("%d",&week);

    (week==1)?printf("Monday"):(week==2)?printf("Tuesday"):(week==3)?printf("Wednesday"):(week==4)?printf("Thursday"):(week==5)?printf("Friday"):(week==6)?printf("Saturday"):(week==7)?printf("Sunday"):printf("Invalid input");


    return 0;
}

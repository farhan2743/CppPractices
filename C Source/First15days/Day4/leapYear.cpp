/*Simply put, a leap year is a year with an extra day—February 29—which is added nearly every four years
 to the calendar year.
Generally, a leap year happens every four years, which, thankfully, is a fairly simple pattern to remember.
 However, there is a little more to it than that.
Here are the rules of leap years:

 1) A year may be a leap year if it is evenly divisible by 4.
 2) Years that are divisible by 100 (century years such as 1900 or 2000) cannot be leap years unless
  they are also divisible by 400. (For this reason, the years 1700, 1800, and 1900 were not leap years, 
  but the years 1600 and 2000 were.)
Now Your Task is write a c++ program which take a year as input and calculate the year is leap year or 
not.

input:
-------
input integare number X as year.
output: 
---------
print "This Year is a leap Year" if X is leap year
print "This Year is not a Leap Year" is X is not leap year. */

#include"stdio.h"
int main(){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    if (year%400==0 )
    {
        printf("This Year is a leap Year\n");

    }
    else
    {
        if (year%4==0)
        {
            if (year%100 != 0)
            {
               printf("This Year is a leap Year\n");
            }
            else
                 printf("This Year is not a leap Year\n");
            
        }
        else
        {
            printf("This Year is not a leap Year\n");
        }
        
        
    }
    return 0;
}